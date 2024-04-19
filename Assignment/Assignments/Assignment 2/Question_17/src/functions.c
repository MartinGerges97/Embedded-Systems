/*
 * functions.c
 *
 *  Created on: Mar 30, 2024
 *      Author: mm557
 */

#include <stdio.h>
#define ANSI_COLOR_RED


/*function to achieve the second constrain, for R must be greater than L, if not
	 lines of code made to swap them*/
void R_bigger_L(int *L, int *R)
{
	int x = *L,y=*R;
	if(x>y)
	{
		int temp;
		temp = *R;
		*R = *L;
		*L = temp;
	}
	return;
}

/*function to calculate the xor output of each to combinations of the numbers L and R*/
int max_Xor(int L,int R)
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
	return max;
}

