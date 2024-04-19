/*
 ============================================================================
 Name        : Question_10.c
 Author      : Martin Gerges
 Description :  You are designing a poster which prints out numbers with a unique style
 	 applied to each of them. The styling is based on the number of closed paths
 	 or holes present in a giver number. The number of holes that each of the
 	 digits from 0 to 9 have are equal to the number of closed paths in the digit.
 	 Their values are:
	• 1, 2, 3, 5 and 7 = 0 holes.
	• 0, 4, 6, and 9 = 1 hole.
	• 8 = 2 holes.
	Given a number, you must determine the sum of the number of holes
	for all of its digits. For example, the number 819 has 3 holes.

 ============================================================================
 */

#include<stdio.h>
void num_of_holes(int number);
int main()
{
	int number;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%d",&number);

	num_of_holes(number);

	return 0;
}

/*function to count the number of holes in a given number digit by digit */
void num_of_holes(int number)
{
	int count=0,num;
	do {
		num = number%10;/*to find the first digit*/
		number/=10;/*to remove the digits we checked*/
		/*switch case to count the b=number of holes in one digit*/
		switch(num){
		case 0:
		case 4:
		case 6:
		case 9:
			count+=1;
			break;
		case 8:
			count+=2;
			break;
		}
	}while(number>0);
	printf("the number of holes in this number equals: %d",count);
}
