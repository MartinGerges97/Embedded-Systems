/*
 ============================================================================
 Name        : Question_2.c
 Author      : Martin Gerges
 Description : code that takes one character and checks if it alphabet or not.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void alphabet(char c)
{
	if((c>=65 && c<=90)||(c>=97 && c<=123))
		printf("the character you entered is an alphabetical character");
	else
		printf("the character you entered is not an alphabetical character");
	return;
}

int main(void) {
	char c;
		printf("enter a character: ");
		fflush(stdout);
		scanf("%c",&c);
		alphabet(c);
	return 0;
}
