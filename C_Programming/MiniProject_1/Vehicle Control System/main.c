/*
 ============================================================================
 Name        : Vehicle Control System
 Author      : Martin Gerges
 Description : main file of the project
 ============================================================================
 */
#include <stdio.h>

#define COLOR_GREEN  "\x1b[32m"
#define COLOR_YELLOW "\x1b[33m"
#define COLOR_RED    "\x1b[31m"
#define COLOR_BLUE   "\x1b[34m"
#define EXIT_SUCCESS 0


int main(void)
{
	int state;
	printf(COLOR_BLUE "Please Choose which state you want to continue with: \n\n" COLOR_BLUE);
	printf(COLOR_GREEN "1- Turn on Vehicle Engine\n"  COLOR_GREEN);
	printf(COLOR_GREEN   "2- Turn off Vehicle Engine\n" COLOR_GREEN);
	printf(COLOR_GREEN  "3- Quit System\n"  COLOR_GREEN );
	printf(COLOR_YELLOW  "You may Enter the number of the state" COLOR_YELLOW);

	do{
	printf("\n\n");
	fflush(stdout);
	scanf(COLOR_BLUE "%d",&state);
	if(state > 3 || state < 1)
	{
		printf(COLOR_RED "\n You Choosed a number out of specified options!\n  Please choose the correct number of state" COLOR_RED);
	}
	}while(state > 3 || state < 1);

	if(state == 3)
	{
		printf(COLOR_RED "\nQuit System, EXIT_SUCCESS!\n" COLOR_RED);
		return EXIT_SUCCESS;
	}
	return 0;
}
