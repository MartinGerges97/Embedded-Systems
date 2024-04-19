/*
 ============================================================================
 Name        : Question_17.c
 Author      : Martin Gerges
 Description : (18) Given a positive integer z, check if z can be written as 𝑝𝑞,
 where p and q are positive integers than 1, if z can be written as 𝑝𝑞 return 1 else return 0.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int isP_powerof_Q(int number);
int main(void) {
	int number, power;
	printf("enter a number ");
	fflush(stdout);
	scanf("%d",&number);
	power = isP_powerof_Q(number);
	//printf("your number cannot be expressed as p power of q");
	printf("%d",power);
	return 0;
}


int isP_powerof_Q(int number)
{
	int power = 0;
	for(int i = 2; i<number-1;i++)
	{
		for (int j = number-1; j>1;j--){
		if( (int) pow(i,j) == number){
				power = 1;
				break;
			}
		}
	}

	return power;
}
