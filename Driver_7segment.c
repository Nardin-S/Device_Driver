/*
 * 7Segment_driver.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Meriam
 */

#include "Driver_7segment.h"
#include "Buzzer.h"
#include <util/delay.h>

void Segment_initial(void)
{

#if EN == 1
     DIO_WritePin ( DIO_PORTB , DIO_Pin2 , DIO_PORT_High);

#elif  EN == 2
     DIO_WritePin ( DIO_PORTB , DIO_Pin1 , DIO_PORT_High);
#endif

	DIO_SetPinDir( DIO_PORTA ,DIO_Pin4 ,DIO_Pin_OUTPUT );

	DIO_SetPinDir( DIO_PORTA ,DIO_Pin5 ,DIO_Pin_OUTPUT );

    DIO_SetPinDir( DIO_PORTA ,DIO_Pin6 ,DIO_Pin_OUTPUT );

	DIO_SetPinDir( DIO_PORTA ,DIO_Pin7 ,DIO_Pin_OUTPUT );

	DIO_SetPinDir( DIO_PORTB ,DIO_Pin1 ,DIO_Pin_OUTPUT );

	DIO_SetPinDir( DIO_PORTB ,DIO_Pin2 ,DIO_Pin_OUTPUT );

	DIO_SetPinDir( DIO_PORTB ,DIO_Pin3 ,DIO_Pin_OUTPUT );
}


void Segment_increment_Counter (Uint8 Count)
{

Uint8 Start_Value = Count;

    buzzer_initial ();

	DIO_WritePort(DIO_PORTA,(Count<< 4));

	 if (Count == 9){

			buzzer_ON();

			_delay_ms(500);

			buzzer_OFF();

			Count = Start_Value -1  ;
		 }
	  Count ++ ;

}

void Segment_decrement_Counter (Uint8 count){

	Uint8 Start_Value = count;

		if (count ==0)
		{
			buzzer_ON();

			_delay_ms(500);

			buzzer_OFF();

			count = Start_Value + 1 ;
			}

		count--;
}














