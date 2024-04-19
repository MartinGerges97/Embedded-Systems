/*
 ============================================================================
 Name        : Question_2.c
 Author      : Martin Gerges
 Description : Write a function which, given a string, return TRUE if all characters
 are distinct and FALSE if any character is repeated.
 ============================================================================
 */

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int CheckDuplicates(char *str);

int main()
{
	char string[]="special!";
	printf("%d",CheckDuplicates(string));

	return 0;
}
int CheckDuplicates(char *str)
{
	for(int i =0;str[i]!='\0';i++)
	{
		for(int j =i+1;str[j]!='\0';j++)
		{
			if(str[i]==str[j])
			{
				return 1;
			}
		}

	}
	return 0;
}

