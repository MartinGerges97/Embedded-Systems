
/*
 ============================================================================
 Name        : Question_7.c
 Author      : Martin Gerges
 Description : Write a program that computes the nth term of the arithmetic
 series: 1, 3, 5, 7, 9, … Run the program to compute the 100th term of the given series.
 ============================================================================
 */

#include <stdio.h>
int compute_NthTerm(int num);

int main()
{
	int number = 100;
	int result = compute_NthTerm(number);
	printf("%d",result);

	return 0;
}

int compute_NthTerm(int num)
{
	int N = -1;
	while (num)
	{
		N = N+2;
		num--;
	}

	return N;
}

