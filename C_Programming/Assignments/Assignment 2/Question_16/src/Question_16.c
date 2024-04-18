/*
 ============================================================================
 Name        : Question_15.c
 Author      : Martin Gerges
 Description : code to count the number of 1’s in an unsigned 8-bit integer.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int count_1s_bits(unsigned char number);
int main(void) {
	/*taking a variable with a range more than we need, to avoid overflow*/
	unsigned short int number;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%hd",&number);
	printf("%d",count_1s_bits(number));
	return 0;
}

int count_1s_bits(unsigned char number)
{
	int mask = 1,count = 0;
	while(number >= 1) /*loop to check when the number reaches 0 to stop*/
	{
		/*condition to check if there is a 1 bit in the least siginficant bit*/
		if((number & mask) == 1)
		{
			count++;
		}
		/*shift right to divide by 2; push the bits towards the LSB
			to use the bit wise and operation with mask to see if it is 1 or 0 */
		number>>=1;
	}

	return count;
}

