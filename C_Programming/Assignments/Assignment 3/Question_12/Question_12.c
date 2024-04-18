/*
 ============================================================================
 Name        : Question_12.c
 Author      : Martin Gerges
 Description : (12) Write a function to find the length of a string.
 ============================================================================
 */

#include <stdio.h>
#include <math.h>
int StringLength(char *str);
int main()
{
	char str[] = "Find the length of me";
	puts(str);
	int count = StringLength(str);
	printf("the length of the string is %d characters, %d bytes",count,count);
	return 0;
}



int StringLength(char *str)
{
	int count = 1;
	while(*str != '\0')
	{
		count++;
		str++;
	}

	return count;
}
