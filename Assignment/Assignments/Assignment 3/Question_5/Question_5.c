/*
 ============================================================================
 Name        : Question_3.c
 Author      : Martin Gerges
 Description : Write a C function to return the index of FIRST occurrence of a
 number in a given array. Array index start from 0. If the item is not in the list return -1.
 ============================================================================
 */

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int LinearSearch(int *array,int size,int number);


int main()
{
	int array[] = {5,3,1,8,10,25,87,8,65,22,15,684};
	int number = 99;
	/*passing the array with its size to the function*/
	int index = LinearSearch(array,(sizeof(array)/4),number);
	if(index!=-1)

		printf("the index of the value %d in the array is %d",number,index);

	else
		printf("the value %d is not found the array",number);



		return 0;
}

/*function to search in the array for an element*/
int LinearSearch(int *array,int size,int number)
{
	for(int i=0;i<size;i++)
	{
		if(*array == number)
		{
			return i;
		}
		array++;
	}
	return -1;
}



