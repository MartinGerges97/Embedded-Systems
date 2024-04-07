/*
 ============================================================================
 Name        : Question_13.c
 Author      : Martin Gerges
 Description : (13) Write a function to remove all characters in a string expect alphabet.
 ============================================================================
 */

#include <stdio.h>
#include <math.h>
int RemoveNon_Alphabet(char *str);
int main()
{
	char str[] = "Re--move **Non Alph//abe**tical c-*/hara/84cters!";
	puts(str);
	RemoveNon_Alphabet(str);
	puts(str);
	return 0;
}



int RemoveNon_Alphabet(char *str)
{
while(*str != '\0')
{

	if((*str >= 65 && *str <= 90)||(*str >= 97 && *str <= 122));
	else
	{
		*str = ' ';

	}

	str++;
}


return 0;
}
