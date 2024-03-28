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
#define ANSI_COLOR_RED
void max_Xor(short int L,short int R);
int main(void) {
	unsigned short int L,R;
	/*do-while loop to achieve the first constrain, for L and R in the range of [1:1000]*/
	do
	{
		printf("enter two numbers between 1 and 1000: ");
		fflush(stdout);
		scanf("%hd%hd",&L,&R);
		if((L<1||L>1000)||(R<1||R>1000))
		{
			printf("\033[1;31mThe number you entered is out of the specified range [1:1000]\033[0m\n\n");
		}
	}while((L<1||L>1000)||(R<1||R>1000));
	/*if condition to achieve the second constrain, for R must be greater than L, if not
	 lines of code made to swap them*/
	if(L>R)
	{
		short int temp;
		temp = R;
		R = L;
		L = temp;
	}

	max_Xor(L,R);
	//printf("%hd\n%hd",L,R);
	return 0;
}
/*function to calculate the xor output of each to combinations of the numbers L and R*/
void max_Xor(short int L,short int R)
{
	int max = 0,result = 0;/*max and result veariable to store the maximum result*/
	for(int i = L;i<=R;i++){
		for(int j = L;j<=R;j++){
			result = i ^ j;
			if(result > max)
			{
				max = result;
			}
		}
	}
	printf("The maximum Value of A XOR B is : %d",max);
	return;
}
