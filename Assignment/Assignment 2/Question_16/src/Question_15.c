/*
 ============================================================================
 Name        : Question_15.c
 Author      : Martin Gerges
 Description : code to count the number of 1’s in an unsigned 32-bit integer.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int count_1s_bits(unsigned short int number);
int main(void) {
	unsigned short int number;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%hd",&number);

	count_1s_bits(number);
	return 0;
}

int count_1s_bits(unsigned short int number)
{
	int count = 0, reminder;
	if(number <=255)
	{

		while(number > 0){
			reminder = number%2;
			if(reminder == 1)
				count++;
			number>>=1;
		}
		printf("%d",count);
	}
	else
	{
		printf("your number is out of the 8 bits range");
	}

	return 0;
}
