#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x,y,z;
	string input;

	printf("Enter operator: ");	
	cin >> input;

	
	if (input == "+")
	{
		printf("Enter 1 number: ");	scanf_s("%lf", &x);
		printf("Enter 2 number: ");	scanf_s("%lf", &y);
		z = x + y;
		printf("%0.3lf + %0.3lf = %0.3lf \n", x, y, z);
	}
	else if (input == "-")
	{
		printf("Enter 1 number: ");	scanf_s("%lf", &x);
		printf("Enter 2 number: ");	scanf_s("%lf", &y);
		z = x - y;
		printf("%0.3lf - %0.3lf = %0.3lf \n", x, y, z);
	}
	else if (input == "/")
	{
		printf("Enter 1 number: ");	scanf_s("%lf", &x);
		printf("Enter 2 number: ");	scanf_s("%lf", &y);
		z = x / y;
		printf("%0.3lf / %0.3lf = %0.3lf \n", x, y, z);
	}
	else if (input == "*")
	{
		printf("Enter 1 number: ");	scanf_s("%lf", &x);
		printf("Enter 2 number: ");	scanf_s("%lf", &y);
		z = x * y;
		printf("%0.3lf * %0.3lf = %0.3lf \n", x, y, z);
	}
	else if (input == "sin")
	{
		printf("Enter number: ");	scanf_s("%lf", &x);
		z = sin(x);
		printf("sin %0.3lf = %0.3lf \n", x, z);
	}
	else if (input == "sqrt")
	{
		printf("Enter number: ");	scanf_s("%lf", &x);
		z = sqrt(x);
		printf("sqrt %0.3lf = %0.3lf \n", x, z);
	}
	else
	{
		printf("error input");
	}
	
	string restart;
	printf("¬вести заново? y/n\n");
	cin >> restart;
	if (restart == "y")
	{
		main();
	}
	else
	{
		exit(0);
	}
}