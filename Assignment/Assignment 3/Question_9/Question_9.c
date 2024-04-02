/*
 ============================================================================
 Name        : Question_9.c
 Author      : Martin Gerges
 Description : The sequence of numbers 1, 1, 2, 3, 5, 8, 13, … is called Fibonacci numbers;
 each is the sum of the preceding 2. Write a program which given n,
 returns the nth Fibonacci number. - with for/while - with recursion
 ============================================================================
 */

#include <stdio.h>
#include <math.h>
int compute_Fibonacci_While(int num);
int compute_Fibonacci_Recursion(int num);

int main()
{
	int number = 7;
	int result_loop = compute_Fibonacci_While(number);
	int result_recursion = compute_Fibonacci_Recursion(number);
	printf("%d\n",result_loop);
	printf("%d\n",result_recursion);

	return 0;
}

/*function to compute the fibonacci series using while loop*/
int compute_Fibonacci_While(int num)
{
	int f0 = 0, f1=1,f;
	while (num-1)
	{
		f = f0+f1;
		f0 = f1;
		f1 = f;
		num--;
	}

	return f;
}
/*function to compute the fibonacci series using recursive method*/

int compute_Fibonacci_Recursion(int num)
{
	if(num<=1)
		return num;
	else
		return compute_Fibonacci_Recursion(num-1)+compute_Fibonacci_Recursion(num-2);
}


