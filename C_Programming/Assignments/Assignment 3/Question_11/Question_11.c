/*
 ============================================================================
 Name        : Question_9.c
 Author      : Martin Gerges
 Description : (11) Write a function that prints the frequency of a certain character in a string.
 ============================================================================
 */

#include <stdio.h>
#include <math.h>
int LettersCounter(char *str,char letter);
int main()
{
	char str[] = "Count Occurrence of a Letter";
	char letter = 'e';
	int count = LettersCounter(str,letter);
	printf("the letter %c is found %d times in the string",letter,count);
	return 0;
}



int LettersCounter(char *str,char letter)
{
	int count = 0;
	while(*str != '\0')
	{
		if(*str == letter)
		{
			count++;
		}
		str++;
	}

	return count;
}
