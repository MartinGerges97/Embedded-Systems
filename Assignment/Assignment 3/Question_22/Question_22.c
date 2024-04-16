/*
 ============================================================================
 Name        : Question_22.c
 Author      : Martin Gerges
 Description : (22) Write a c function that removes the repeated number of an input sorted array
 and return a new array without the repeated numbers. The function shall return error if the
 size of the input array is ZERO. The function takes four inputs:
 ============================================================================
 */

#include <stdio.h>
#include <math.h>



int removeDuplicates(int *arr_old, int n_old, int *arr_new, int n_new);
void print_array(int *array, int size);



int main()
{
	int n_old = 10, n_new = 10;
	int array_old[] = {1,1,2,3,3,6,7,7,8};
	int array_new[n_new];

	int n = removeDuplicates(array_old, n_old, array_new, n_new);


	print_array(array_new,n);

	return 0;
}


int removeDuplicates(int *arr_old, int n_old, int *arr_new, int n_new)
{
	if(n_old == 0)
	{
		printf("Error");
		return 0;
	}
	int j=-1;
	for(int i = 0; i<n_old;i++)
	{
		if(arr_old[i]!=arr_old[i+1])
		{
			j++;
			arr_new[j]=arr_old[i];

		}

	}


	return j;
}


void print_array(int *array, int size)
{
	for (int i = 0; i<size ; i++)
	{
		printf("%d\t",array[i]);

	}

	printf("\n\n");
	return;
}

