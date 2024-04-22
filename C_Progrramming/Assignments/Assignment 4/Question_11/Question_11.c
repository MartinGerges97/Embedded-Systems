/*
 ============================================================================
 Name        : Question_11.c
 Author      : Martin Gerges
 Description : (11) Write a c program that SWAP the value of the two 16-bits of 32-bits integer number.
 ============================================================================
 */
#include <stdio.h>

#define Null (void*)0

void swap_bytes(short *pointer);


int main(void)
{
	int number = 0xAAAABBBB;
	printf("Number before swapping: %X\n",number);

	swap_bytes((short*)&number);

	printf("\nNumber after swapping: %X\n",number);




	return 0;
}


void swap_bytes(short *pointer)
{
	short temp = *(pointer + 0);
	*(pointer + 0) = *(pointer + 1);
	*(pointer + 1) = temp;

	return;
}
