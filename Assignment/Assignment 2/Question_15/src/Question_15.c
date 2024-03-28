/*
 ============================================================================
 Name        : Question_15.c
 Author      : Martin Gerges
 Description : code to count the number of 1’s in an unsigned 32-bit integer.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void count_1s_bits(unsigned long long int number);

int main(void) {
	/*taking a variable with a range more than we need, to avoid overflow*/
	unsigned long long int number;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%llu",&number);

	count_1s_bits(number);
	return 0;
}

void count_1s_bits(unsigned long long int number)
{
	char count = 0, reminder;
	if(number <= 4294967295) /*if condition to determine the range of 32 bits number*/
	{
		while(number > 0){
			/*we calculate the reminder, cause if the number is odd, thats mean
			 that the least significant bit is 1, so the counter is incrementing*/
			reminder = number%2;
			if(reminder == 1)
				count++;
			/*shift right to push the bits towards the least significant bit,
			  and whenever the reminder gives us 1, the counter will increment*/
			number>>=1;
		}
		printf("%d",count);
	}
	else /*in case the user entered out of range number*/
	{
		printf("Your number is out of the 32 bit range");
	}

	return;
}
