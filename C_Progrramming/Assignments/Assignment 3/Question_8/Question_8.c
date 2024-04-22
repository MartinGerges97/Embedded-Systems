/*
 ============================================================================
 Name        : Question_8.c
 Author      : Martin Gerges
 Description : Write a program that computes the nth term of the geometric
 series: 1, 3, 9, 27, … Run the program to compute the 10th term of the given series.
 ============================================================================
 */

#include <stdio.h>
#include <math.h>
double compute_NthTerm(int num);

int main()
{
	int number = 10;
	int result = compute_NthTerm(number);
	printf("%d",result);

	return 0;
}

double compute_NthTerm(int num)
{
	double N = 1, power = 1;
	while (num)
	{
		N = pow(3,power);
		power++;
		num--;
	}

	return N;
}

