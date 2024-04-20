/*
 * jj.c
 *
 *  Created on: Apr 20, 2024
 *      Author: mm557
 */


/*
 ============================================================================
 Name        : Vehicle Control System
 Author      : Martin Gerges
 Description : main file of the project
 ============================================================================
 */


/*=======================================================================================
 * program definitions
 * =======================================================================================*/

#include <stdio.h>
#define COLOR_GREEN  "\x1b[32m"
#define COLOR_YELLOW "\x1b[33m"
#define COLOR_RED    "\x1b[31m"
#define COLOR_BLUE   "\x1b[34m"
#define EXIT_SUCCESS 0

enum TrafficLights
{
	RED = 0,
	ORANGE = 1,
	GREEN = 2
};
enum SetMenuOptions
{
	Turn_off_engine = 1,
	set_traffic_light_color = 2,
	set_room_temperature = 3,
	set_engine_temperature = 4
};
enum ProgramStates
{
	Engine_ON = 1,
	Engine_OFF = 2,
	Quit_System = 3
};
void Start_program();
void Display_State(void);


/*===============================================================================
 * initialization of variables
 * =============================================================================*/

struct Program_inputs
{
	char program_state;
}userInputs;


/*================================================================================
 * main function of the program
 * ================================================================================*/

int main(void)
{
	Start_program();
	printf("%c",userInputs.program_state);
	return EXIT_SUCCESS;
}




/*========================================================================================
 * Functions of the program
 * =======================================================================================*/

/*Function to display the states of the program*/
void Display_State(void)
{
	printf(COLOR_BLUE  "Please Choose which state you want to continue with: \n\n" COLOR_BLUE);
	printf(COLOR_GREEN "a- Turn on Vehicle Engine\n"  COLOR_GREEN);
	printf(COLOR_GREEN "b- Turn off Vehicle Engine\n" COLOR_GREEN);
	printf(COLOR_GREEN "c- Quit System\n"  COLOR_GREEN );
	printf(COLOR_YELLOW  "You may Enter the character of the state" COLOR_YELLOW);
	return;
}

/*Function to start the program and take the engine state input from the user*/
void Start_program()
{
	do{
		Display_State();
		printf("\n\n");
		fflush(stdout);
		scanf("%c",&userInputs.program_state);
		if(userInputs.program_state > 99 || userInputs.program_state< 97)
		{
			printf(COLOR_RED "\n Your choice is out of the specified options!\n  Please choose the correct character of state\n\n" COLOR_RED);
		}
	}while(userInputs.program_state > 99 || userInputs.program_state < 97);

	return;
}



