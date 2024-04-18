/*
 ============================================================================
 Name        : Question_16.c
 Author      : Martin Gerges
 Description : Write a C function that takes an array as input and reverse it.
 ============================================================================
 */

#include <stdio.h>
#include <math.h>
#define size 5

int ArrayReverse(int *array,int Array_size);
void swap(int *ptr1, int *ptr2);


int main()
{
	int array[size];
	printf("Enter the array: ");

	for (int i = 0; i<size ; i++)
	{
		fflush(stdout);
		scanf("%d",&array[i]);

	}

	ArrayReverse(array,size);
	printf("The Reversed array:\n ");

	for (int i = 0; i<size ; i++)
		{
			printf("%d\t",array[i]);

		}

	return 0;
}



int ArrayReverse(int *array,int Array_size)
{
	/*First, we set a pointer to the end of the Array*/
	int *Array_ptr = array+size-1; /*assign the address value to the last element on the array*/
	/*Second, for loop with limit (Array length / 2) */
	for (int i = 0; i <=Array_size/2; i++)
	{
		/*Third, use swap function to swap the first element with the last element in the array*/
		swap(array,Array_ptr);
		/*the first pointer ++ to point to the second element*/
		array++;
		/*the second pointer -- to point to the second element from behind*/
		Array_ptr--;
	}

	return 0;
}

void swap(int *ptr1, int *ptr2)
{
	int temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;

	return;
}
