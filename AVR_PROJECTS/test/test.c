/*
 * Exercise_1.c
 *
 *  Created on: Apr 22, 2024
 *      Author: mm557
 */


#include <stdio.h>

int main()
{
	int x = 0x00,mask = 128;

	printf("7 6 5 4 3 2 1 0\n");

	/*SET SPECIFIC BIT*/
	x = x|(1<<5); /*set bit 5*/
	x |=(1<<3);
	x |=(1<<6);
	/*CLEAR SPECIFIC BIT*/
	x &=~(1<<5); /*clear bit 5*/

	/*TOGGLE SPECIFIC BIT*/
	x ^= (1<<6);
	x ^= (1<<4);

	if(!(x & (1<<3)) )
			printf("\nyes\n");
		else
			printf("\nno\n");
	for(int i = 0; i< 8;i++)
	{
		if(x&mask)
		{
			printf("%d ",1);
		}
		else
			printf("%d ",0);
		x= x<<1;
	}

	return 0;
}
