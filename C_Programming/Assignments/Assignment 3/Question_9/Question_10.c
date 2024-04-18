/*
 ============================================================================
 Name        : Question_9.c
 Author      : Martin Gerges
 Description : (10) Write a function which, given a string, converts all uppercase
 letters to lowercase, leaving the others unchanged.
 ============================================================================
 */

#include <stdio.h>
#include <math.h>
void UpperCase(char *str);
int main()
{
	char str[] = "Convert To UpperCase";
	UpperCase(str);
	puts(str);

	return 0;
}



void UpperCase(char *str)
{
	while(*str != '\0')
	{
		if((*str>= 97)&&(*str <= 127))
		{
			*str = *str - 32;
		}
		str++;
	}

	return;
}
