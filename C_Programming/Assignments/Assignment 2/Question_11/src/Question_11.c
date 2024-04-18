/*
 =================================================================================
 Name        : Question_11.c
 Author      : Martin Gerges
 Description : C code that returns 1 if the input number
 	 	 	   is a power of 2 and return 0 if the input number is not power of 2.
 =================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int isPowerOfTwo(int number);
int main(void) {
	unsigned int number;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%d",&number);
	int n = isPowerOfTwo(number);
	printf("%d",n);
	return 0;
}


int isPowerOfTwo(int number)
{

	int return_value = 0,mask = 1,count = 0;

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
	/*numbers wich are power of two 1,2,4,8,16,.... are known to have only one high bit (1) in their binary representation,
	 * so, if count = 1, the number is power of 2, else it is not*/
	if(1 == count)
		return_value = 1;


	return return_value;
}
