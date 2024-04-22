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
	DDRC |=(1<<PC1);
	DDRC |=(1<<PC2);
	DDRC |=(1<<PC0);
	PORTC &= ~(1<<PC1);
	PORTC &= ~(1<<PC2);
	PORTC &= ~(1<<PC0);

	while(1)
	{

		PORTC |=(1<<1);
		_delay_ms(500);
		PORTC &= ~(1<<1);

		PORTC |=(1<<2);
		_delay_ms(500);
		PORTC &= ~(1<<2);


		PORTC |=(1<<0);
		_delay_ms(500);
		PORTC &= ~(1<<0);

	}
}
