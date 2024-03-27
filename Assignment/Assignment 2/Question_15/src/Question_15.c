/*
 ============================================================================
 Name        : Question_15.c
 Author      : Martin Gerges
 Description : code to count the number of 1’s in an unsigned 32-bit integer.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
unsigned long int count_1s_bits(unsigned long int number);
int main(void) {
	 unsigned long int number;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%lu",&number);

	printf(" %lu",count_1s_bits(number));

	//printf("%d",sizeof(number));
	return 0;
}

unsigned long int count_1s_bits(unsigned long int number)
{
	unsigned long int count = 0, reminder;
	while(number > 0){
		reminder = number%2;
		if(reminder == 1)
			count++;
		number>>=1;
	}

	return count;
}
