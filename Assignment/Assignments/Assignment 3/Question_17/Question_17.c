/*
 ============================================================================
 Name        : Question_17.c
 Author      : Martin Gerges
 Description : Write a C Program for swapping two arrays “A & B” with different lengths.
 B will be always the smallest array.
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

#define Array_A_Size 5
#define Array_B_Size 3


int Swap_array (int a_size,int *array_a,int b_size,int *array_b);
void swap_elements(int *ptr1, int *ptr2);

void print_array(int *array, int size);
int main()
{

	int Array_A[Array_A_Size] = {1,2,3,4,5};
	int Array_B[Array_B_Size] = {7,8,9};
	int Array_difference[Array_A_Size-Array_B_Size];

	printf("==================================\n");
	printf("       Before Swapping \n");
	printf("==================================\ns\n");

	printf("Array_A before swapping: \n");
	print_array(Array_A,Array_A_Size);
	printf("Array_B before swapping: \n");
	print_array(Array_B,Array_B_Size);

	printf("==================================\n");
	printf("        After Swapping \n");
	printf("==================================\n\n");

	/*Function to swap two arrays*/
	Swap_array(Array_A_Size,Array_A,Array_B_Size,Array_B);


	printf("Array_A after swapping: \n");
	print_array(Array_A,Array_A_Size);
	printf("Array_B after swapping: \n");
	print_array(Array_B,Array_B_Size);




	return 0;
}



int Swap_array (int a_size,int *array_a,int b_size,int *array_b)
{
	for(int i=0;i<b_size;i++)
	{
		swap_elements(array_a,array_b);
		array_a++;
		array_b++;

	}


	return 0;
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

void swap_elements(int *ptr1, int *ptr2)
{
	int temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;

	return;
}
