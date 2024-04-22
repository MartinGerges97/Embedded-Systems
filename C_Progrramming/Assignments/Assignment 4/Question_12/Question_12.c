/*
 ============================================================================
 Name        : Question_12.c
 Author      : Martin Gerges
 Description : (12) Array that contains integer values, some of these values are repeated
 with an even number of repetitions, and only one value is repeated with an odd number of
 repetitions. Write a C function that’s take the array as input and the array size and return
 the number which has odd numbers of repetitions.
 ============================================================================
 */
#include <stdio.h>

#define Null (void*)0
#define Array_Size 15
int find_ODDduplicates(int *array, int arr_size);


int main(void)
{
	int array[Array_Size] = {1,2,3,1,5,4,6,7,2,3,5,6,7,4,4};

	int number = find_ODDduplicates(array,Array_Size);

	printf("the number that has odd repetition is: %d ",number);
	return 0;
}


int find_ODDduplicates(int *array, int arr_size)
{
	int count = 0, index = 0;
	for(int i = 0; i < arr_size ; i++)
	{
		for(int j = 0; j < arr_size; j++)
		{
			if(*(array+i)==*(array+j))
			{
				count++;
				index = i;
			}
		}
		if(count % 2 != 0)
		{
			return array[index];
		}
		else
		{
			count = 0;
			index = 0;
		}
	}
	return 0;
}
