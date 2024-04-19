/*
 ============================================================================
 Name        : Question_19.c
 Author      : Martin Gerges
 Description : Write a C function to return an array containing the values between two 8-bits unsigned integers IN DESCENDING ORDER INCLUSIZE.
 The function takes 2 values (LowerValue and UpperValue), it shall determine the values in between, and then arrange the sequence
 in descending order including the upper and lower values.
If the LowerValue is greater than the UpperValue, return an array of 2 elements, both containing value = 0xFF
 ============================================================================
 */

#include <stdio.h>
#include <math.h>



int Return_Array(int Lower_value, int Upper_value);
void print_array(char *array, int size);

char array[256];


int main()
{
	int Lower_value = 2;
	int Upper_value = 5;
	//Return_Array(Lower_value,Upper_value);
	int array_size= Return_Array(Lower_value,Upper_value);

	print_array(array,array_size);



	return 0;
}

int Return_Array(int Lower_value, int Upper_value)
{
	if(Lower_value >= Upper_value)
	{
		array[0] = array[1]=0xFF;

		return 2;

	}
	int array_size = Upper_value - Lower_value;
	for(int i = 0;i<array_size;i++)
	{
		array[i] = Upper_value - i;
	}
	return array_size;

}


void print_array(char *array, int size)
{
	for (int i = 0; i<size ; i++)
	{
		printf("%d\t",array[i]);

	}

	printf("\n\n");
	return;
}

