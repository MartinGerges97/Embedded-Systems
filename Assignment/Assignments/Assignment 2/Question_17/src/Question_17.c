/*
 ============================================================================
 Name        : Question_17.c
 Author      : Martin Gerges
 Description : (17) Given two integers: L and R, Find the maximal value of A xor B where A and B
 satisfy the condition L =< A <= B <= R Constrains: 1 <= L <= R <= 1000 Input format: the input contains
 two lines first line contains L and next line contains R. Output format: The maximum value of A xor B
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "functions_prototypes.h"
int main(void) {
	int L,R, max;

	/*do while loop to take input from the user and make sure L and R within the right range*/
	do
	{
		printf("enter two numbers between 1 and 1000: ");
		fflush(stdout);
		scanf("%d%d",&L,&R);
		if((L<1||L>1000)||(R<1||R>1000))
		{
			printf("\033[1;31mThe number you entered is out of the specified range [1:1000]\033[0m\n\n");
		}
	}while((L<1||L>1000)||(R<1||R>1000));

	/*function to make sure R is bigger than L*/
	R_bigger_L(&L,&R);

	/*function to calculate the xor output of each to combinations of the numbers L and R*/
	max = max_Xor(L,R);

	printf("The maximum Value of A XOR B is : %d",max);

	return 0;

}
