/*
 * ATmega32_Registers.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: Meriam
 */

#ifndef ATMEGA32_REGISTERS_H_
#define ATMEGA32_REGISTERS_H_

#include "STD.h"

/********************* DIO REGISTERS *******************/

/* __PORT A __ */

#define DDRA (*(volatile Uint8*)(0x3A))
#define PORTA (*(volatile Uint8*)(0x3B))
#define PINA (*(volatile Uint8*)(0x39))

/* __PORT B __ */

#define DDRB (*(volatile Uint8*)(0x37))
#define PORTB (*(volatile Uint8*)(0x38))
#define PINB (*(volatile Uint8*)(0x36))

/* __PORT C __ */

#define DDRC (*(volatile Uint8*)(0x34))
#define PORTC (*(volatile Uint8*)(0x35))
#define PINC (*(volatile Uint8*)(0x33))

/* __PORT D __ */

#define DDRD (*(volatile Uint8*)(0x31))
#define PORTD (*(volatile Uint8*)(0x32))
#define PIND (*(volatile Uint8*)(0x30))

#endif /* ATMEGA32_REGISTERS_H_ */
