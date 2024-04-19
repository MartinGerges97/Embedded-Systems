/*
 ============================================================================
 Name        : Question_14.c
 Author      : Martin Gerges
 Description : (15) Write a function to concatenate two strings without using strcat function.
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int StringConcat(char *str1, char *str2, char *str_concatenated);
int StringLength(char *str);


int main()
{
	char str1[] = "String one, ";
	char str2[] = "String two!";
	int size = StringLength(str1)+StringLength(str2);
	char str_concatenated[size];

	puts(str1);
	puts(str2);

	StringConcat(str1,str2,str_concatenated);

	puts(str_concatenated);
	return 0;
}



int StringConcat(char *str1, char *str2, char *str_concatenated)
{
	printf("\n\n");
	while(*str1 != '\0')
	{
		*str_concatenated = *str1;
		str_concatenated++;
		str1++;
	}


	while(*str2 != '\0')
	{
		*str_concatenated = *str2;
		str_concatenated++;
		str2++;
	}


	return 0;
}

/*function to find the length of the string*/
int StringLength(char *str)
{
	int count = 0;
	while(*str != '\0')
	{
		count++;
		str++;
	}

	return count;
}

