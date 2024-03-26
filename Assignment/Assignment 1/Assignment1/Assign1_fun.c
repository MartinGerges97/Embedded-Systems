/*
 * Assign1_fun.c
 *
 *  Created on: Mar 26, 2024
 *      Author: mm557
 */
#include<stdio.h>

void question_1(void)
{
	int num1,num2, result;

	printf(" enter the first number: ");
	fflush(stdout);
	scanf("%d",&num1);
	printf(" enter the second number: ");
	fflush(stdout);
	scanf("%d",&num2);
	result = ((num1+num2)*3)-10;
	printf("your result is :   %d",result);

	return;
}
void question_2(void)
{
	int grade;
	printf("enter your grade: ");
	fflush(stdout);
	scanf("%d",&grade);
	char name[20];
	printf("enter your name: ");
	fflush(stdout);
	scanf("%s",&name);

	printf("Your name is : %s\nYour grade is %d",name,grade);
	return;
}
void question_3(void){
	float temp_cel,temp_fah;
	printf("Please enter the temperature value in Celsius : ");
	scanf("%f",&temp_cel);

	/* Calculate the temp in Fahrenheit */
	temp_fah=((temp_cel*9)/5)+32;

	printf("\nThe temperature in Fahrenheit is : %f",temp_fah);
	return ;
}
#define PI 3.14
void question_4(void)
{
	float radious,area,circumference;
	    scanf("%f",&radious);

		/* Calculate the circle area */
	    area=PI*radious*radious;

		/* Calculate the circle circumference */
	    circumference=2*PI*radious;

	    printf("Circle Area=%f\nCircle Circumference=%f\n",area,circumference);
	    return;
}
