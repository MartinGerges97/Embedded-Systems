
/* ============================================================================
 Name        : Vehicle Control System
 Author      : Martin Gerges
 Description : main file of the project
 ============================================================================
 */


/*===========================================================================*
 * PROGRAM DEFINITIONS
 *=========================================================================== */
#include <stdio.h>

/*Definition of color codes*/
#define COLOR_GREEN  "\x1b[32m"
#define COLOR_YELLOW "\x1b[33m"
#define COLOR_RED    "\x1b[31m"
#define COLOR_BLUE   "\x1b[34m"
#define EXIT_SUCCESS 0

/*DEFINITIONS OF ON and OFF STATES*/
enum AcState
{
	ON = 1,
	OFF = 0
};
/*DEFINITIONS OF TRAFFIC LIGHTS COLORS*/
enum TrafficLights
{
	RED = 'R',
	ORANGE = 'O',
	GREEN = 'G'
};
/*DEFINITIONS OF SET MENU OPTIONS*/
enum SetMenuOptions
{
	Turn_off_engine = 'a',
	set_traffic_light_color = 'b',
	set_room_temperature = 'c',
	set_engine_temperature = 'd'
};
/*DEFINITIONS OF PROGRAM STATES*/
enum ProgramStates
{
	Engine_ON = 'a',
	Engine_OFF = 'b',
	Quit_System = 'c'
};
/*DEFINITIONS OF VEHICLE SPEED*/
enum speed
{
	kill_speed = 0,
	min_speed = 30,
	max_speed = 100
};
/*DEFINITIONS OF ROOM TEMPERATURE DEGREES*/
enum room_temp
{
	min_room_temp = 10,
	max_room_temp = 30,
	moderate_room_temp = 20
};
/*DEFINITIONS OF ENGINE TEMPERATURE DEGREES*/
enum engine_temp
{
	min_engine_temp = 100,
	max_engine_temp = 150,
	moderate_engine_temp = 125
};

/*===========================================================================*
 * FUNCTIONS PROTOTYPES
 *=========================================================================== */
void Display_State(void);
void Start_program(void);
void VehicleEngine_OFF(void);
int VehicleEngine_ON(void);
void SetMenu(void);
void SetMenu_inState(void);
void Room_Temperature(void);
void Traffic_Lights(void);
void Engine_Temperature(void);
void Check_Speed(void);
void Dispaly_System_states(void);
/*===========================================================================*
 * PROGRAM INITIALIZATION OF VARIABLES
 *=========================================================================== */

/*Structure that stores all data inputs by the user*/
struct Program_inputs
{
	char program_state;
	char SetMenu_state;
	char traffic_light;
	int room_temp;
	int engine_temp;
};
/*User Inputs initialization,
 * set Program State to 'b' --> turn off engine
 * set SetMenue State to 'a' --> turn off engine
 * set Traffic Color to 'R' --> RED
 * set Room Temperature to 0
 * set Engine Temperature to 0*/
struct Program_inputs userInputs = {'b','a','R',0,0};

/*Structure that stores all variable data outputs from the program*/
struct program_outputs
{
	int vehicle_speed;
	int vehicle_AC;
	int engine_temp_Controler;
};
/*Program outputs initialization,
 * set Vehicle Speed to 0
 * set Vehicle Ac to OFF state
 * set Engine Temperature Controler to OFF state */
struct program_outputs userOutputs = {0,OFF,OFF};

/*===========================================================================*
 * PROGRAM MAIN, PROGRAM STARTS HERE...
 *=========================================================================== */
int main(void)
{
	while(ON)/*Always true while loop to make sure the system runs until the user press Quit System*/
	{
		/*Function to start the program, takes the program state input from the user*/
		Start_program();
		/*Switch case, to check on the Program state input*/
		switch (userInputs.program_state)
		{
		case Engine_ON:
			/*Case Engine ON, Display Vehicle Engine is Turned ON, and run VehicleEngine_ON function, */
			printf(COLOR_GREEN "\n\n Vehicle Engine is Turned ON..."COLOR_GREEN);
			VehicleEngine_ON();
			/*use break to exit switch loop condition and start program again */
			break;
		case Engine_OFF:
			/*Case, Engine OFF, use break to exit switch loop condition and start program again */
			VehicleEngine_OFF();
			break;
		case Quit_System:
			/*Case Quit System, the only input from user that could end the while loop*/
			printf(COLOR_RED "\nQuit System, EXIT_SUCCESS!\n" COLOR_RED);
			return EXIT_SUCCESS;
		}

	}
	return EXIT_SUCCESS;
}


/*===========================================================================*
 * PROGRAM FUNCTIONS
 *=========================================================================== */

/*Function to Display the System State the user want to continue with*/
void Display_State(void)
{
	printf(COLOR_BLUE  "\n\nPlease Choose which state you want to continue with: \n\n" COLOR_BLUE);
	printf(COLOR_GREEN "a- Turn on Vehicle Engine\n"  COLOR_GREEN);
	printf(COLOR_GREEN "b- Turn off Vehicle Engine\n" COLOR_GREEN);
	printf(COLOR_GREEN "c- Quit System\n"  COLOR_GREEN );
	printf(COLOR_YELLOW  "You may Enter the character of the state" COLOR_YELLOW);
	return;
}

/*Function to start the program and take the engine state input from the user*/
void Start_program()
{
	/*Do while looping to make sure that the user input is within the specified options*/
	do{
		Display_State();
		printf("\n\n");
		fflush(stdout);
		scanf(" %c",&userInputs.program_state);
		/*if condition to display the Error message*/
		if(userInputs.program_state > 'c' || userInputs.program_state< 'a')
		{
			printf(COLOR_RED "\n Your choice is out of the specified options!\n  Please choose the correct character of state\n\n" COLOR_RED);
		}
	}while(userInputs.program_state > 'c' || userInputs.program_state < 'a');
	/*condition if user input character below 'a' or above 'c', loop to take the input again from the user must run till the user enters the right input*/
	return;
}

/*Function to Display the Sensor Set Menu if chosen Engine ON */
void SetMenu(void)
{
	printf(COLOR_BLUE "\n\nSENSOR SET MENU!\n\n"COLOR_BLUE);
	printf(COLOR_GREEN "a.Turn off the engine.\n" COLOR_GREEN);
	printf(COLOR_GREEN "b.Set the traffic light color.\n" COLOR_GREEN);
	printf(COLOR_GREEN "c.Set the room temperature.\n" COLOR_GREEN);
	printf(COLOR_GREEN "d.Set the engine temperature\n" COLOR_GREEN);
	printf(COLOR_YELLOW  "You may Enter the number of the data you want to feed the program from the set menu\n" COLOR_YELLOW);
	return;
}

/*Function to take the Sensor set menu input from the user, and plays the corresponding function to take the sensor inputs*/
void SetMenu_inState(void)
{
	/*Function to Display the Sensor Set Menu*/
	SetMenu();
	/*Do while looping to make sure that the user input is within the specified options*/
	do{
		printf("\n\n");
		fflush(stdout);
		scanf(" %c",&userInputs.SetMenu_state);
		/*if condition to display the Error message*/
		if(userInputs.SetMenu_state > 'd' || userInputs.SetMenu_state < 'a')
		{
			printf(COLOR_RED "\n Your choice is out of the specified options!\n  Please choose the correct character of state" COLOR_RED);
		}
	}while(userInputs.SetMenu_state > 'd' || userInputs.SetMenu_state < 'a');
	/*condition if user input character below 'a' or above 'c', loop to take the input again from the user must run till the user enters the right input*/
	return;
}


/*Function to Display Message Vehicle Engine Turned OFF */
void VehicleEngine_OFF(void)
{
	printf(COLOR_RED "\n\n Vehicle Engine Turned OFF Successfully...\n\n" COLOR_RED);
	return;
}

/*Function to run the requirements of the program if Engine ON state is ACTIVE*/
int VehicleEngine_ON(void)
{
	while(ON) /*Always true while loop to make sure the system runs until the user press Quit System*/
	{
		/*First, run SetMenu_inState to take the Sensor set menu input from the user*/
		SetMenu_inState();
		/*Switch Case, to determine which sensor function will be run*/
		switch (userInputs.SetMenu_state)
		{
		case Turn_off_engine:
			/*Case Engine Off, Display Engine Off,*/
			VehicleEngine_OFF();
			return 0;/*return to main Function, to start program function and display program states*/
		case set_traffic_light_color:
			/*Case Set Traffic Lights, Run Traffic Lights functions to take sensor inputs,
			 * Check speed function, Display System states at that moment,*/
			Traffic_Lights();
			Check_Speed();
			Dispaly_System_states();
			break;/*break; to exit switch and start VehicleEngine_ON function again and take another sensor readings or to change the current one*/
		case set_room_temperature:
			/*Case set_room_temperature, Run Room_Temperature function to take sensor inputs,
			 * Check speed function, Display System states at that moment,*/
			Room_Temperature();
			Check_Speed();
			Dispaly_System_states();
			break;/*break; to exit switch and start VehicleEngine_ON function again and take another sensor readings or to change the current one*/
		case set_engine_temperature:
			/*Case set_engine_temperature, Run Engine_Temperature function to take sensor inputs,
			 * Check speed function, Display System states at that moment,*/
			Engine_Temperature();
			Check_Speed();
			Dispaly_System_states();
			break;/*break; to exit switch and start VehicleEngine_ON function again and take another sensor readings or to change the current one*/
		}
	}

	return 0;
}

/*Function to take traffic light sensor inputs */
void Traffic_Lights(void)
{
	printf("\n\nEnter The Traffic light color: \n\n");
	printf(COLOR_GREEN"Enter R for RED traffic light\nEnter O for Orange traffic light\nEnter G for Green traffic light\n\n");
	fflush(stdout);
	scanf(" %c",&userInputs.traffic_light);
	/*Switch the traffic light color*/
	switch(userInputs.traffic_light)
	{
	case RED:
		/*Traffic light color is red, kill the vehicle speed, set to 0 km/h*/
		userOutputs.vehicle_speed = kill_speed;
		printf(COLOR_RED "Traffic Light is RED , Vehicle Speed is set to %d km/h\n\n",userOutputs.vehicle_speed);
		break;
	case ORANGE:
		/*Traffic light color is orange, set vehicle speed to minimum speed, set to 30 km/h*/
		userOutputs.vehicle_speed = min_speed;
		printf(COLOR_YELLOW"Traffic Light is Orange, Vehicle Speed is set to %d km/h\n\n",userOutputs.vehicle_speed);
		break;
	case GREEN:
		/*Traffic light color is green, set vehicle speed to maximum speed, set to 100 km/h*/
		userOutputs.vehicle_speed = max_speed;
		printf(COLOR_GREEN "Traffic Light is Green, Vehicle Speed is set to %d km/h\n\n",userOutputs.vehicle_speed);
		break;
	default:
		/*default if user input is not valid, run function again*/
		printf(COLOR_RED "Invalid input, Please Try Again!");
		Traffic_Lights();
	}

}

/*Function to take room temperature sensor inputs */
void Room_Temperature(void)
{
	printf(COLOR_BLUE "\n\nEnter The Room Temperature: \n\n");
	fflush(stdout);
	scanf("%d",&userInputs.room_temp);
	/*case if room temp > max_temp or < min_temp, AC turned on, and room_temp is set to moderate temp*/
	if(userInputs.room_temp < min_room_temp || userInputs.room_temp >max_room_temp)
	{
		userInputs.room_temp = moderate_room_temp;
		userOutputs.vehicle_AC = ON;
		printf(COLOR_GREEN "Vehicle AC is Turned ON");
	}
	/*else, AC is not needed and turned off*/
	else
	{
		userOutputs.vehicle_AC = OFF;
		printf(COLOR_RED "Vehicle AC is Turned OFF");
	}
	return;
}

/*Function to take engine temperature sensor inputs */
void Engine_Temperature(void)
{
	/*ETC: Engine Temperature Controller*/
	printf(COLOR_BLUE "\n\nEnter The Engine Temperature: \n\n");
	fflush(stdout);
	scanf("%d",&userInputs.engine_temp);
	/*case if engine temp > max_temp or < min_temp, ETC is turned on, and engine_temp is set to moderate temp*/
	if(userInputs.engine_temp < min_engine_temp || userInputs.engine_temp > max_room_temp)
	{
		userInputs.engine_temp = moderate_engine_temp;
		userOutputs.engine_temp_Controler = ON;
		printf(COLOR_GREEN "Engine Temperature Controller is Turned ON");
	}
	/*else, ETC is not needed and turned off*/
	else
	{
		userOutputs.engine_temp_Controler = OFF;
		printf(COLOR_RED "Engine Temperature Controller is Turned OFF");
	}

	return;
}

/*Function to check the speed, if it equals to minimum speed*/
void Check_Speed(void)
{
	if(userOutputs.vehicle_speed == min_speed)
	{
		userOutputs.vehicle_AC = ON;
		userInputs.room_temp = userInputs.room_temp *(5.0/4)+1;
		userOutputs.engine_temp_Controler = ON;
		userInputs.engine_temp = userInputs.engine_temp *(5.0/4)+1;
	}
	return;
}
/*Function to display the system states*/
void Dispaly_System_states(void)
{
	printf(COLOR_YELLOW"\n=========System States===========\n");
	switch (userInputs.program_state)
	{
	case Engine_ON:
		printf(COLOR_GREEN"Engine State:\t\t\tON");
		break;
	case Engine_OFF:
		printf(COLOR_RED"\nEngine State:\t\t\tOFF");
		break;
	}
	switch (userOutputs.vehicle_AC)
	{
	case ON:
		printf(COLOR_GREEN"\nAC:\t\t\t\tON");
		break;
	case OFF:
		printf(COLOR_RED"\nAC:\t\t\t\tOFF");
		break;
	}
	printf(COLOR_BLUE "\nVehicle Speed:\t\t\t%d Km/h",userOutputs.vehicle_speed);
	printf(COLOR_BLUE "\nRoom Temperature:\t\t%d C",userInputs.room_temp);
	switch (userOutputs.engine_temp_Controler)
	{
	case ON:
		printf(COLOR_GREEN"\nEngine Temperature Controler:\tON");
		break;
	case OFF:
		printf(COLOR_RED"\nEngine Temperature Controler:\tOFF");
		break;
	}
	printf(COLOR_BLUE "\nEngine Temperature:\t\t%d C",userInputs.engine_temp);
	printf(COLOR_YELLOW"\n==================================\n");
	return;
}
