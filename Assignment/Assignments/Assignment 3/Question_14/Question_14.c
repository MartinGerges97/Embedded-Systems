/*
 ============================================================================
 Name        : Question_14.c
 Author      : Martin Gerges
 Description : 14) Write a function to reverse a string by passing it to a function
 Code to reverse a string, without using another empty string;
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int StringReverse(char *str);
void swap_char(char *ptr1, char *ptr2);
int StringLength(char *str);


int main()
{
	char str[] = "!gnirtS shiT esreveR";
	puts(str);
	StringReverse(str);
	puts(str);
	return 0;
}



int StringReverse(char *str)
{

	/*first, we find the length of the string*/
	int count = StringLength(str);
	/*second, we set a pointer to the end of the string, (-1) to make the pointer point to the character before the null value*/
	char *ptr = str+count-1;
	/*third, for loop with limit (string length / 2) */
	for(int i = 0;i<=count/2;i++)
	{
		/*fourth, use swap function to swap the first element with the last element in the string*/
		swap_char(str,ptr);
		/*the first pointer ++ to point to the second element*/
		str++;
		/*the second pointer -- to point to the second element from behind*/
		ptr--;
		/*then swap each two adjacent element untill we reach the middle (count/2), all elements will be swapped*/
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

/*function to swap characters*/
void swap_char(char *ptr1, char *ptr2)
{
	char temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;

	return;
}
