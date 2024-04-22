/*
 ============================================================================
 Name        : Question_3.c
 Author      : Martin Gerges
 Description : (4) Write a C function that use the selection sort algorithm to
 sort an integer array in ascending order
 ============================================================================
 */

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int SelectionSort(int *array,int size);
void swap(int *a, int *b);
void print_array(int *arr,int size);


int main()
{
	int array[] = {5,3,1,8,10,25,87,95,65,22,15,684};
	/*passing the array with its size to the function*/
	SelectionSort(array,(sizeof(array)/4));
	/*function to print the array after sorting*/
	print_array(array,sizeof(array)/4);
	return 0;
}

/*function to sort the array*/
int SelectionSort(int *array,int size)
{
	int min = 0;
	/*for loop to compare the first element*/
	for(int i=0;i<size;i++)
	{
		min = i;/*assuming every iteration the first element is the minimum*/
		for(int j=i+1;j<size;j++)
		{
			if(array[min]>array[j])
			{
				min = j;/*varible to store the index of the minmum number in the array*/
			}
		}
		swap(&array[i],&array[min]);/*then swap the minimum value and put it in the first place in the array, and start with second element in the next iteration*/
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

void print_array(int *array,int size)
{
	for(int i=0;i<size;i++)
		{
			printf("%d\t",array[i]);
		}
		return;
}

