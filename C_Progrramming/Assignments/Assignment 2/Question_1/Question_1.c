/*
 ============================================================================
 Name        : Question_1.c
 Author      : Martin Gerges
 Description : code to print the cube of any number
 ============================================================================
 */
#include <stdio.h>
void cube(int num1)
{
	long long result;
	result = num1*num1*num1;
	printf("the cube of the number you entered equals: %lld",result);

	return;
}
int main(){

	int num1;
		printf("enter any number: ");
		fflush(stdout);
		scanf("%d",&num1);
		cube(num1);

	return 0;
}


