/*
 ============================================================================
 Name        : Question_3.c
 Author      : Martin Gerges
 Description : (3) Write a C function that use the bubble sort algorithm to sort
 an integer array in ascending order.
 ============================================================================
 */

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int BubbleSort(int *array,int size);
void swap(int *a, int *b);

int main()
{
	int array[] = {5,7,8,9,4,10,15,8,7,6,25,65,84,85,24};
	BubbleSort(array,(sizeof(array)/4));
	for(int i=0;i<(sizeof(array)/4);i++)
	{
		printf("%d\t",array[i]);
	}
	return 0;
}

/*function to sort the array*/
int BubbleSort(int *array,int size)
{
	for(int i = 0;i<size;i++)
	{
		for(int j = 0; j<size-1;j++)
		{
			if(array[j]>array[j+1])
			{
				swap(&array[j],&array[j+1]);
			}
		}
	}
	return 0;
}

void swap(int *a, int *b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;

	return;
}
