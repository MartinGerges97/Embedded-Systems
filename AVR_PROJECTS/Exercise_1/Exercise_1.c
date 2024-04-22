/*
 * Exercise_1.c
 *
 *  Created on: Apr 22, 2024
 *      Author: mm557
 */


#include <avr/io.h>

int main(void)
{
	DDRD &= ~(1<<2); /*SET PUSH BUTTON AS INPUT */
	DDRC |= (1<<1); /*SET PIN 1 IN PORT C AS OUTPUT*/
	PORTC &=~(1<<1); /*SET OUPUT ON PIN 1 TO 0, AT THE BEGINING */
	while(1)
	{
		if(!(PIND & (1<<2)))
			PORTC |= (1<<1);
		else
			PORTC &=~(1<<1);
	}

}

