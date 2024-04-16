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
void print_array(char *array, int size);



int main()
{
	int n_old = 10, n_new = 10;
	int array_old[] = {1,2,1,4,5,6,7,1,2,5};
	int array_new[n_new];

	int n = removeDuplicates(array_old, n_old, array_new, n_new);

	print_array(array_new,n);

	return 0;
}

int removeDuplicates(int *arr_old, int n_old, int *arr_new, int n_new)
{
	int k=0;
	for(int i =0 ; i < n_old-1; i++)
	{
		//arr_new[i] = arr_old[i];
		printf("\n\n");

		printf("i = %d\n",i);
		printf("n = %d\n",n_new);
		printf("arr_old = %d\n",arr_old[i]);
		printf("arr_new = %d\n",arr_new[i]);
		printf("\n\n");

	//	printf("i = %d\n",i);

		printf("\n\n");
		for(int j = i+1; j<n_old;j++)
		{
			printf("j = %d\n",j);
			if(arr_old[i]==arr_old[j])
			{
				n_new--;
				arr_new[k] = arr_old[i];
				k++;
				printf("n = %d\n",n_new);
				break;
			}
			else
			{
				arr_new[i] = arr_old[i];
			}
			//arr_new[i] = arr_old[i];
		}
	}
	return n_new;

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

