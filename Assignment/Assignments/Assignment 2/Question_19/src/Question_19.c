/*
 ============================================================================
 Name        : Question_17.c
 Author      : Martin Gerges
 Description : (19) Write a C function that return 0 if a given number is a power of 3,
  otherwise return 1 (except 3 to the power of 0).
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int isPowerOf_3(int number);
int main(void) {
	int number, return_value;
	printf("enter a number ");
	fflush(stdout);
	scanf("%d",&number);
	return_value = isPowerOf_3(number);
	//printf("your number cannot be expressed as p power of q");
	printf("%d",return_value);
	return 0;
}


int isPowerOf_3(int number)
{
	int power = 0;
	for(int i = 2; i<number-1;i++)
	{
		if( (int) pow(3,i) == number){
			power = 1;
			break;
		}

	}

	return power;
}
