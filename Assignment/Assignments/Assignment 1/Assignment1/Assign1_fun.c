/*
 * Assign1_fun.c
 *
 *  Created on: Mar 26, 2024
 *      Author: mm557
 */
#include<stdio.h>
#include<math.h>
#include <stdbool.h>
#define PI 3.14

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
	int grade = 5;
	char name[20] = "Martin";

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
void question_5(void)
{
	char c;

	printf("Enter your character: ");
	fflush(stdout);
	scanf("%c",&c);

	printf("The ASCII code for your character is: %d",c);
	return;
}
void question_6(void)
{
	int integer1; //first number to be input by user
	int integer2; // second number to be input by user
	printf( "Enter first integer:\n" );
	scanf( "%d", &integer1 );
	printf( "Enter second integer:\n" );
	scanf( "%d", &integer2 );
	if(integer1 > integer2)
	{
		printf("integer1 is greater than integer2\n");
	}
	else if(integer1 < integer2)
	{
		printf("integer2 is greater than integer1\n");
	}
	else
	{
		printf("both numbers are equal\n");
	}
	return;
}
void question_7(void)
{
	int input1,input2,input3;
	int Min;
	printf("Please enter the three numbers : ");
	scanf("%d%d%d",&input1,&input2,&input3);

	/* Assume that the first number is the minimum number */
	Min=input1;
	/* Compare between the first number and second number to decide which one is the min between them */
	if(input2<=Min)
	{
		Min=input2;
	}

	/* Compare between the third number and previous min number to decide which one is the min between them */
	if(input3<=Min)
	{
		Min=input3;
	}

	printf("the min number is: %d",Min);
	return;
}
void question_8(void)
{
	int input;
	int root;
	printf("Please enter the required number : ");
	scanf("%d",&input);
	root=sqrt(input);

	/* check of the input number is perfect square or not */
	if(input==(root*root))
	{
		printf("%d is the perfect square root of %d",root,input);
	}
	else
	{
		printf("perfect square root not exist");
	}
	return;
}
void question_9(void)
{
	float grade;
	printf("Please enter the student grade : ");
	scanf("%f",&grade);

	if(grade>=85)
	{
		printf("Excellent");
	}
	else if(85>grade && grade>=75)
	{
		printf("Very Good");
	}
	else if(75>grade && grade>=65)
	{
		printf("Good");
	}
	else if(65>grade && grade>=50)
	{
		printf("Pass");
	}
	else
	{
		printf("Fail");
	}
	return;
}
void question_10(void)
{
	char operator;
	float firstNumber,secondNumber;
	double result;

	printf("Enter an operator + or - or * or % ");
	scanf("%c", &operator);

	printf("\nEnter two operands: ");
	scanf("%f %f",&firstNumber, &secondNumber);

	/* Swicth case to perfrom the required operations */
	switch(operator)
	{
	case '+':
		result = firstNumber + secondNumber;
		printf("\n%f + %f = %lf",firstNumber, secondNumber, result);
		break;

	case '-':
		result = firstNumber - secondNumber;
		printf("\n%f - %f = %lf",firstNumber, secondNumber, result);
		break;

	case '*':
		result = firstNumber * secondNumber;
		printf("\n%f * %f = %lf",firstNumber, secondNumber, result);
		break;

	case '/':
		result = firstNumber / secondNumber;
		printf("\n%f / %f = %lf",firstNumber, secondNumber, result);
		break;

		/* operator doesn't match any case constant (+, -, *, /) */
	default:
		printf("Error! operator is not correct");
	}

	return;
}
void question_11(void)
{
	int sum=0;
	int i;
	for(i=1;i<=100;i++)
	{
		sum += i;
	}
	printf("sum of the first 100 integer numbers equals : %d\n",sum);

	/* Check if the sum of the 100 number is correct */
	if(sum == 5050)
	{
		printf("sum of the first 100 integer numbers is correct\n");
	}
	else
	{
		printf("sum of the first 100 integer numbers is not correct\n");
	}

	return;
}
void question_12(void)
{
	int input;
	long long fact = 1;
	int i;
	printf("Please enter the required number : ");
	scanf("%d",&input);

	/* Loop to calcuate the factorial for example (5! = 5 * 4 * 3 * 2 * 1) */
	for(i=1;i<=input;i++)
	{
		fact = fact * i;
	}
	printf("\nfactorial of %d is: %lld",input,fact);
	return;
}

void question_13(void)
{
	int input;
	int i;
	bool isPrime = True; /* flag to indicate that the number is prime or not */
	printf("Please enter the required number : ");
	scanf("%d",&input);

	if ((input == 0) || (input == 1))
		isPrime = FALSE;

	for(i=2;i<=(input/2);i++)
	{
		/* Check if the input number can be divided by i */
		if(input%i == 0)
		{
			isPrime = FALSE; /* this number is not a prime number */
			/* Terminate the loop as no need to continue the loop iterations. Because This is a not prime number. */
			break;
		}
	}

	/* in case the isPrime still equals TRUE which means that the number can not be divided
	       by another number */
	if(isPrime == TRUE)
	{
		printf("\n%d is a prime number\n",input);
	}
	else
	{
		printf("\n%d is not prime number\n",input);
	}

	return;
}

void question_14(void)
{
	char c;

	/* Loop to print all the capital letters */
	for(c = 'A'; c <= 'Z'; ++c)
		printf("%c ", c);

	return;
}
void question_15(void)
{
	int num, power;

	long long result = 1;

	printf("Enter a num number: ");
	scanf("%d", &num);

	printf("\nEnter an power: ");
	scanf("%d", &power);

	/* Multiply the number by its value for number of times equals to the input power */
	while (power != 0)
	{
		result *= num;
		--power;
	}

	printf("\nAnswer = %lld", result);

	return;
}
void question_16(void)
{
	int num,c,r=0;

	printf("enter your number: ");
	fflush(stdout);
	scanf("%d",&num);
	while (num !=0 ){
		c = num % 10;
		r = r*10 + c;
		num = num/10;
	}
	printf(" your reversed number is %d",r);
	return;

}
void question_17(void)
{
	int num;
	int count = 0;

	printf("Enter an integer: ");
	scanf("%d", &num);

	while(num != 0)
	{
		/* Divide number by 10 to get the next digit to right before the next loop iteration */
		num /= 10;

		/* Increment the number of digits */
		++count;
	}

	printf("Number of digits: %d", count);
	return;
}
void question_18(void)
{
	for (int i =1;i<=5;i++){
		for(int j = 1 ;j<=i;j++){
			printf(" * ");
		}
		printf("\n");
	}
	printf("\n\n");
	return;
}
void question_19(void)
{
	for (int i =1;i<=5;i++){
		for(int j = 5;j>=i;j--){
			printf(" * ");
		}
		printf("\n");
	}
	printf("\n\n");

	return;
}
void question_20(void)
{
	int x = 5;
	for (int i=5;i>=1;i--){
		for(int o=0;o<x;o++){
			printf(" ");
		}
		x-=1;
		for(int j=1;j<=9;j++){
			if(j >=i && j<=(9-i+1) ){
				printf("*");
			}
			printf(" ");
		}
		printf("\n");
	}
	printf("\n\n");
	return;
}
void question_21(void)
{
	for (int i=1;i<=10;i++){
		for (int j=0;j<=20;j++){
			if(j == (i*2) || j == (22-i*2)){
				printf("*");
			}
			printf(" ");
		}
		printf("\n");
	}
	return;
}

