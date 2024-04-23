/*
 * Exercise_1.c
 *
 *  Created on: Apr 22, 2024
 *      Author: mm557
 */


#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	/*SET PIN 0 , 1 IN PORT B AS INPUT*/
	DDRB &=~(1<<0);
	DDRB &=~(1<<1);
	/*SET INITIALIZED INPUT OF PIN 0,1 IN PORT B AS 0, PULL DOWN*/
	PINB &=~(1<<0); /*push button works with 1 as input*/
	PINB &=~(1<<0);
	/*SET PIN 0 , 1 IN PORT C AS OUTPUT*/
	DDRC |=(1<<0);
	DDRC |=(1<<1);
	/*SET INITIALIZED OUTPUT OF PIN 0,1 IN PORT C AS 1, NEGATIVE LOGIC*/
	PORTC |=(1<<0); /*led turn on with 0 as input*/
	PORTC |=(1<<1);

	while(1)
	{
		if(PINB&(1<<0))/*Check if PIN 0 is set to 1 --> button bushed*/
			PORTC &= ~(1<<0);/*but pin c = 0, turn on led*/
		else
			PORTC |=(1<<0);
		if(PINB&(1<<1))
			PORTC &= ~(1<<1);
		else
			PORTC |=(1<<1);
	}
}
