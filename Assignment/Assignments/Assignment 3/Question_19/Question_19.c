/*
 ============================================================================
 Name        : Question_19.c
 Author      : Martin Gerges
 Description : Write a C function that compare between 2 arrays with the same length.
 It shall return 0 if the two arrays are identical and 1 if not.
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

#define Array_A_Size 5
#define Array_B_Size 5
#define Array_C_Size 5


int iSIdentical(int *array1,int *array2,int arrays_size);
void print_array(int *array, int size);


int main()
{
	int result;
	int Array_A[Array_A_Size] = {1,2,3,4,5};
	int Array_B[Array_B_Size] = {1,2,3,4,5};
	int Array_C[Array_C_Size] = {1,2,0,4,5};

	result = iSIdentical(Array_A,Array_B,Array_A_Size);
	if(result == 1)
		printf("the two arrays are identical");
	else
		printf("the two arrays are not identical");








	return 0;
}

int iSIdentical(int *array1,int *array2,int arrays_size)
{
	for(int i = 0; i<arrays_size;i++)
	{
		if(*array1 != *array2)
			return 0;
		array1++;
		array2++;
	}
	return 1;
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

