/*
 ============================================================================
 Name        : Question_1.c
 Author      : Martin Gerges
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <math.h>
#define Array_A_Size 10

int con_occurrence(int *array,int array_size ,int number);

int main(){
	int Array_A[Array_A_Size] = {1,1,2,1,1,0,3,3,4,5};
	int number = 3;
	int (*PTRcon_occurence)(int,int,int) = con_occurrence;
	int result = (*PTRcon_occurence)(Array_A,Array_A_Size,number);

	//	block code to print the array
	for (int i = 0; i<Array_A_Size ; i++)
	{
		printf("%d\t",Array_A[i]);

	}

	printf("\nthe longest consective occurenec of the number %d is %d",number,result);





	return 0;
}
int con_occurrence(int *array,int array_size ,int number)
{
	int count = 0,max=0;

	for(int i =0;i<array_size;i++)
	{
		if(*array == number)
		{
			count++;
			if(count>max)
			{
				max = count;
			}
		}
		else
			count =0;
		array++;
	}


	return max;
}
