/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Meriam
 */


# include "DIO.h"
#include "Driver_7segment.h"
#define F_CPU 16000000
#include <util/delay.h>



int main (void){

	Segment_initial();
    Uint8 Counter = 0 ;


    while(1){

    	 Segment_increment_Counter (Counter);
    }


}
