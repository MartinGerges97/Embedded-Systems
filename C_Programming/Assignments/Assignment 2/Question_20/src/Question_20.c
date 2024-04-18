/*
 ============================================================================
 Name        : Question_15.c
 Author      : Martin Gerges
 Description : (20) Write a C function to count the maximum number of
 consecutive 1’s in an unsigned 16 bits integer.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int count_continuous_high_bits(unsigned short int number);
int main(void) {
	unsigned short int number;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%hd",&number);
	printf("%d",count_continuous_high_bits(number));
	return 0;
}

int count_continuous_high_bits(unsigned short int number)
{
	int mask = 3,count = 1, max = 0;/*counter = 1, cause the first time the counter will count 2 ones*/
	while(number >= 1) /*loop to check when the number reaches 0 to stop*/
	{
		/*condition to check if there is a 1 bit in the first two bits from the right*/
		if((number & mask) == 3)
		{
			count++;/*counter increment when there is two continous ones*/
			if (max < count)
				max = count; /*max variable to store the maximum valuse the counter will reach*/
		}
		else
			count = 0; /* making counter = 0, when first zero shows up*/

		/*shift right to divide by 2; push the bits towards the LSBs
			to use the bit wise and operation with mask to see if it is 1 or 0 */
		number>>=1;
	}

	return max;
}

