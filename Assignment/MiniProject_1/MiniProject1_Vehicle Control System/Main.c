
/* ============================================================================
 Name        : Vehicle Control System
 Author      : Martin Gerges
 Description : main file of the project
 ============================================================================
 */


/*===========================================================================*
 * Program definitions and functions prototypes
 *=========================================================================== */
#include <stdio.h>
#define COLOR_GREEN  "\x1b[32m"
#define COLOR_YELLOW "\x1b[33m"
#define COLOR_RED    "\x1b[31m"
#define COLOR_BLUE   "\x1b[34m"
#define EXIT_SUCCESS 0

enum AcState
{
	ON = 1,
	OFF = 0
};
enum TrafficLights
{
	RED = 'R',
	ORANGE = 'O',
	GREEN = 'G'
};
enum SetMenuOptions
{
	Turn_off_engine = 'a',
	set_traffic_light_color = 'b',
	set_room_temperature = 'c',
	set_engine_temperature = 'd'
};
enum ProgramStates
{
	Engine_ON = 'a',
	Engine_OFF = 'b',
	Quit_System = 'c'
};
/*functions prototypes*/
void Display_State(void);
void Start_program();
void QuitSystem(void);
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
 * Program initialization of variables
 *=========================================================================== */
struct Program_inputs
{
	char program_state;
	char SetMenu_state;
	char traffic_light;
	int room_temp;
	int engine_temp;
}userInputs;

struct program_outputs
{
	int vehicle_speed;
	int vehicle_AC;
	int engine_temp_Controler;
}userOutputs;

/*===========================================================================*
 * Program main, program starts here
 *=========================================================================== */
int main(void)
{
	while(1)
	{
		Start_program();

		switch (userInputs.program_state)
		{
		case Engine_ON:
			printf(COLOR_GREEN "\n\n Vehicle Engine is Turned ON..."COLOR_GREEN);
			VehicleEngine_ON();
			break;
		case Engine_OFF:
			VehicleEngine_OFF();
			break;
		case Quit_System:
			QuitSystem();
			return EXIT_SUCCESS;
		}

	}
	return EXIT_SUCCESS;
}


/*===========================================================================*
 * Program functions
 *=========================================================================== */
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
	do{
		Display_State();
		printf("\n\n");
		fflush(stdout);
		scanf(" %c",&userInputs.program_state);
		if(userInputs.program_state > 'c' || userInputs.program_state< 'a')
		{
			printf(COLOR_RED "\n Your choice is out of the specified options!\n  Please choose the correct character of state\n\n" COLOR_RED);
		}
	}while(userInputs.program_state > 'c' || userInputs.program_state < 'a');

	return;
}

void QuitSystem(void)
{
	printf(COLOR_RED "\nQuit System, EXIT_SUCCESS!\n" COLOR_RED);
	return;
}

void VehicleEngine_OFF(void)
{
	printf(COLOR_RED "\n\n Vehicle Engine Turned OFF Successfully...\n\n" COLOR_RED);
	return;
}

int VehicleEngine_ON(void)
{
	SetMenu_inState();

	switch (userInputs.SetMenu_state)
	{
	case Turn_off_engine:
		VehicleEngine_OFF();
		return Turn_off_engine;
	case set_traffic_light_color:
		Traffic_Lights();
		Check_Speed();
		Dispaly_System_states();
		VehicleEngine_ON();
		break;
	case set_room_temperature:
		Room_Temperature();
		Check_Speed();
		Dispaly_System_states();
		VehicleEngine_ON();
		break;
	case set_engine_temperature:
		Engine_Temperature();
		Check_Speed();
		Dispaly_System_states();
		break ;
	}

	return 0;
}


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
void SetMenu_inState(void)
{
	SetMenu();
	do{
		printf("\n\n");
		fflush(stdout);
		scanf(" %c",&userInputs.SetMenu_state);
		if(userInputs.SetMenu_state > 'd' || userInputs.SetMenu_state < 'a')
		{
			printf(COLOR_RED "\n Your choice is out of the specified options!\n  Please choose the correct character of state" COLOR_RED);
		}
	}while(userInputs.SetMenu_state > 'd' || userInputs.SetMenu_state < 'a');

	return;
}


void Traffic_Lights(void)
{
	printf("\n\nEnter The Traffic light color: \n\n");
	printf(COLOR_GREEN"Enter R for RED traffic light\nEnter O for Orange traffic light\nEnter G for Green traffic light\n\n");
	fflush(stdout);
	scanf(" %c",&userInputs.traffic_light);
	switch(userInputs.traffic_light)
	{
	case RED:
		userOutputs.vehicle_speed = 0;
		printf(COLOR_RED "Traffic Light is RED , Vehicle Speed is set to %d km/h\n\n",userOutputs.vehicle_speed);
		break;
	case ORANGE:
		userOutputs.vehicle_speed = 30;
		printf(COLOR_YELLOW"Traffic Light is Orange, Vehicle Speed is set to %d km/h\n\n",userOutputs.vehicle_speed);
		break;
	case GREEN:
		userOutputs.vehicle_speed = 100;
		printf(COLOR_GREEN "Traffic Light is Green, Vehicle Speed is set to %d km/h\n\n",userOutputs.vehicle_speed);
		break;
	default:
		printf(COLOR_RED "Invalid input, Please Try Again!");
		Traffic_Lights();
	}

}


void Room_Temperature(void)
{
	printf(COLOR_BLUE "\n\nEnter The Room Temperature: \n\n");
	fflush(stdout);
	scanf("%d",&userInputs.room_temp);
	if(userInputs.room_temp < 10 || userInputs.room_temp >30)
	{
		userInputs.room_temp = 20;
		userOutputs.vehicle_AC = ON;
		printf(COLOR_GREEN "Vehicle AC is Turned ON");
	}
	else
	{
		userOutputs.vehicle_AC = OFF;
		printf(COLOR_RED "Vehicle AC is Turned OFF");
	}
	return;
}

void Engine_Temperature(void)
{
	printf(COLOR_BLUE "\n\nEnter The Engine Temperature: \n\n");
	fflush(stdout);
	scanf("%d",&userInputs.engine_temp);
	if(userInputs.engine_temp < 100 || userInputs.engine_temp > 150)
	{
		userInputs.engine_temp = 125;
		userOutputs.engine_temp_Controler = ON;
		printf(COLOR_GREEN "Engine Temperature Controller is Turned ON");
	}
	else
	{
		userOutputs.engine_temp_Controler = OFF;
		printf(COLOR_RED "Engine Temperature Controller is Turned OFF");
	}

	return;
}

void Check_Speed(void)
{
	if(userOutputs.vehicle_speed == 30)
	{
		userOutputs.vehicle_AC = ON;
		userInputs.room_temp = userInputs.room_temp *(5.0/4)+1;
		userOutputs.engine_temp_Controler = ON;
		userInputs.engine_temp = userInputs.engine_temp * (float)(5.0/4)+1;
	}
	return;
}
void Dispaly_System_states(void)
{
	printf(COLOR_YELLOW"\n=========System States=========\n");
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
	printf(COLOR_BLUE "\nVehicle Speed:\t\t\t%d",userOutputs.vehicle_speed);
	printf(COLOR_BLUE "\nRoom Temperature:\t\t%d",userInputs.room_temp);
	switch (userOutputs.engine_temp_Controler)
	{
	case ON:
		printf(COLOR_GREEN"\nEngine Temperature Controler:\tON");
		break;
	case OFF:
		printf(COLOR_RED"\nEngine Temperature Controler:\tOFF");
		break;
	}
	printf(COLOR_BLUE "\nEngine Temperature:\t\t%d",userInputs.engine_temp);
	printf(COLOR_YELLOW"\n==================================\n");
	return;
}
