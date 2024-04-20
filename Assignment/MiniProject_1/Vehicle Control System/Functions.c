/*
 ============================================================================
 Name        : Vehicle Control System
 Author      : Martin Gerges
 Description : Functions File of the project
 ============================================================================
 */



int start_program(void)
{
	do{
		printf("\n\n");
		fflush(stdout);
		scanf("%d",&program_state);
		if(program_state > 3 || program_state < 1)
		{
			printf(COLOR_RED "\n You Choosed a number out of specified options!\n  Please choose the correct number of state" COLOR_RED);
		}
	}while(program_state > 3 || program_state < 1);

	return program_state;
}




void QuitSystem(void)
{
	printf(COLOR_RED "\nQuit System, EXIT_SUCCESS!\n" COLOR_RED);
	return;
}
void VehicleEngine_OFF(void)
{
	start_program();
	return;
}


int check_state(int program_state)
{
	if(program_state == Quit_System)
	{
		QuitSystem();
		return EXIT_SUCCESS;
	}
	if(program_state == Engine_OFF)
	{
		VehicleEngine_OFF();
		return EXIT_SUCCESS;
	}
	if(program_state == Engine_ON)
	{
		VehicleEngine_ON();
		return Engine_ON;
	}
	return EXIT_SUCCESS;
}



void VehicleEngine_ON(void)
{
	SetMenu();
	SetMenu_inState();

	switch (SetMenu_state)
	{
	case Turn_off_engine:
		start_program();
		break;
	case set_traffic_light_color:

		break;
	case set_room_temperature:

		break;
	case set_engine_temperature:

		break;
	default:
		start_program();
	}
	return;
}

void SetMenu(void)
{
	printf(COLOR_BLUE "SENSOR SET MENU!"COLOR_BLUE);
	printf(COLOR_GREEN "1.Turn off the engine" COLOR_GREEN);
	printf(COLOR_GREEN "2.Set the traffic light color." COLOR_GREEN);
	printf(COLOR_GREEN "3.Set the room temperature" COLOR_GREEN);
	printf(COLOR_GREEN "4.Set the engine temperature" COLOR_GREEN);
	printf(COLOR_YELLOW  "You may Enter the number of the data you want to feed the program from the set menu" COLOR_YELLOW);
	return;
}

void SetMenu_inState(void)
{
	do{
			printf("\n\n");
			fflush(stdout);
			scanf("%d",&SetMenu_state);
			if(SetMenu_state > 4 || SetMenu_state < 1)
			{
				printf(COLOR_RED "\n You Choosed a number out of specified options!\n  Please choose the correct number of state" COLOR_RED);
			}
		}while(SetMenu_state > 4 || SetMenu_state < 1);

	return;
}

void traffic_lights()
{

}
