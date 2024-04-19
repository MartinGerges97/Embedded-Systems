/*
 ============================================================================
 Name        : Question_15.c
 Author      : Martin Gerges
 Description : (14) Write a C Function that calculate the Fibonacci series using recursive method.
The Fibonacci Series : 0,1,1,2,3,5,8,13,21,…
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int Fibonacci(int number);
int main(void) {
	unsigned short int number;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%hd",&number);
	printf("%d",Fibonacci(number));
	return 0;
}

/*======================================================================================
 *                                   f(6)
 *                  f(5)                                 f(4)
 *        f(4)                f(3)     |     f(3)                      f(2)
 *    f(3)    f(2)         f(2)   f(1) |  f(2)  f(1)                 f(1)  f(0)
 *      2       1            1      1       1     1                    1     0
 * =========================================================================================*/
int Fibonacci(int number)
{
	if(number < 2)
		return number;
	return Fibonacci(number - 1) + Fibonacci(number - 2);
}


