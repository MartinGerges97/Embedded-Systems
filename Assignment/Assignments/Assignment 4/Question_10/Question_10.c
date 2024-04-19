/*
 ============================================================================
 Name        : Question_10.c
 Author      : Martin Gerges
 Description : (10) Write a c function two SWAP two pointers.
 ============================================================================
 */
#include <stdio.h>

#define Null (void*)0

void swap_pointers(int **p2ptr1,int **p2ptr2);


int main(void)
{
	int *pointer1 = Null, *pointer2 = Null;

	int x = 5, y = 10;

	pointer1 = &x;
	pointer2 = &y;

	printf("Before swapping\n");
	printf("%d\n",*pointer1);
	printf("%d\n",*pointer2);

	swap_pointers(&pointer1,&pointer2);

	printf("After swapping\n");
	printf("%d\n",*pointer1);
	printf("%d\n",*pointer2);


	return 0;
}


void swap_pointers(int **p2ptr1,int **p2ptr2)
{
	int *temp_pointer = Null;
	temp_pointer = *p2ptr1;
	*p2ptr1 = *p2ptr2;
	*p2ptr2 = temp_pointer;
	return;
}
