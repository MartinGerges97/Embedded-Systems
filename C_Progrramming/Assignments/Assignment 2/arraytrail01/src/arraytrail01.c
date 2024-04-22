/*
 ============================================================================
 Name        : arraytrail01.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int search_character(char str[], char c);
int main(void) {

	char str[50],c;

	printf("enter your string: ");
	fflush(stdout);
	gets(str);
	printf("enter the character you want to look for: ");
	fflush(stdout);
	scanf("%c",&c);

	int count = search_character(str,c);
	printf("%d",count);


	return 0;
}

int search_character(char *str, char c)
{
	int count = 0, i=0;
	while(str[i]!='\0')
	{
		{
			count++;
		}
		i++;
	}
	return count;
}

