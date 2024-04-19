/*
 ============================================================================
 Name        : Question_4.c
 Author      : Martin Gerges
 Description : 4. C Function to calculate the difference between two time periods using structures.
 ============================================================================
 */

#include <stdio.h>
#define T TimeValues /*T stands for time value*/
/*Creating type defined of structure to store time period*/
enum Time_limits
{
	seconds_range = 60,
	minutes_range = 60,
};

typedef struct Time
{
	int seconds;
	int minutes;
	int hours;
}Time;

/*function that takes an array of structs containing the two time period,
 * and the struct which will contain the difference between them*/
void TimeDifference(Time *TimeArray, Time *TDiff);


int main(void)
{
	/*Creating a list of time structure to store the two time period*/
	Time T[2],TDifference;

	/*Assigning time values to the two periods */
	T[0].hours = 5; T[0].minutes = 35; T[0].seconds = 54;
	T[1].hours = 6; T[1].minutes = 57; T[1].seconds = 47;

	/*print time period 1*/
	printf("Time Period 1\n");
	printf("%d\t%d\t%d\n\n",T[0].hours,T[0].minutes,T[0].seconds);

	/*print time period 2*/
	printf("Time Period 2\n");
	printf("%d\t%d\t%d\n\n",T[1].hours,T[1].minutes,T[1].seconds);

	/*function that takes an array of structs containing the two time period, and the struct which will contain the difference*/
	TimeDifference((Time*)T,(Time*)&TDifference);

	/*print the struct that store the Time Difference*/
	printf("Time Difference between the two periods\n");
	printf("%d\t%d\t%d\n\n",TDifference.hours,TDifference.minutes,TDifference.seconds);

	return 0;
}


void TimeDifference( Time *TimeArray, Time *TDiff)
{
	/*condition to check that time period 1 > time period 2, if not --> we swap them*/
	if(TimeArray -> hours < (TimeArray+1) -> hours)
	{
		Time temp;
		temp = TimeArray[0];
		TimeArray[0] = TimeArray[1];
		TimeArray[1] = temp;
	}
	/*calculate the difference between the two periods, element by element*/

	/*if condition to check if the seconds of time period 1 < the seconds of time period */
	if(TimeArray -> seconds < (TimeArray+1) -> seconds)
	{
		/*if true? seconds member porrow 60 seconds from minutes member*/
		TimeArray -> seconds = (TimeArray -> seconds) + seconds_range;
		/*minutes member is decremented by 1*/
		TimeArray -> minutes = (TimeArray -> minutes) - 1;
		/*then, calculate the difference*/
		TDiff -> seconds = TimeArray -> seconds - (TimeArray + 1) -> seconds;
	}
	/*if false? continue normal */
	else
	{
		TDiff -> seconds = TimeArray -> seconds - (TimeArray + 1) -> seconds;
	}


	/*if condition to check if the minutes of time period 1 < the minutes of time period */
	if(TimeArray -> minutes < (TimeArray+1) -> minutes)
	{
		/*if true? minutes member porrow 60 minutes from hours member*/
		TimeArray -> minutes = (TimeArray -> minutes) + minutes_range;
		/*hours member is decremented by 1*/
		TimeArray -> hours = (TimeArray -> hours) - 1;
		/*then, calculate the difference*/
		TDiff -> minutes = TimeArray -> minutes - (TimeArray + 1) -> minutes;
	}
	/*if false? continue normal */
	else
	{
		TDiff -> minutes = TimeArray -> minutes - (TimeArray + 1) -> minutes;
	}

	/*calculate the difference in hours, time period 1 hours must be > time period 2 hours*/
	TDiff -> hours = TimeArray -> hours - (TimeArray + 1) -> hours;


	return;
}



