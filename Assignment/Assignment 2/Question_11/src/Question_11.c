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

	printf("%d",isPowerOfTwo(number));
	return 0;
}


int isPowerOfTwo(int number)
{
	int return_value;
	/*used switch to switch on 3 cases
	 * case 0: 0 moduls 2 equal zero the return value in the loop will be 1 while it should return 0
	 * case 1: 1 moduls 2 equal one the return value in the loop will be 0 while it should return 1
	 * the number will be power of 2 if the moduls of all the divided numbers by 2 is equal to 0 until the number
	   reachs 1 with no reminders.*/
	switch(number){
	case 1:
		return_value = 1;
		break;
	case 0:
		return_value = 0;
		break;
	default:/* default case for all numbers other tahn zero and one*/
		while(number > 1)
		{
			if(number%2 == 0){ /*check the number is divided by 2 using moduls,*/
				return_value = 1; /*if true return value will be 1*/
				number/=2; /* continue to divide the number by 2, to check it again by moduls 2 and use it as a counter*/
			}
			else
			{
				return_value = 0;/*the first time the moduls is not equal zero, the number can not be power of two*/
				break; /* to exit the while loop, no need to continue*/

			}
		}
		break;/*default break*/
	}

	return return_value;
}
