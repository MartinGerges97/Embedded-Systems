/*
 ============================================================================
 Name        : Question_1.c
 Author      : Martin Gerges
 Description : (1) The sum of an array is the sum of its individual elements.
 For example, if an array is numbers = {1, 2, 3, 4}, the sum of the array is 1+2+3+4 = 10
 ============================================================================
 */

#include <stdio.h>
#include <math.h>
int summation(int *arrPtr, int size);

int main()
{
	int array[] = {1,2,3,4,5};
	int result = summation(array,5);
	printf("%d",result);

	return 0;
}

int summation(int *arrPtr, int size)
{
	int result=0;
	for(int i=0;i<size;i++)
	{
		result+=*arrPtr++;
	}

	return result;
}
