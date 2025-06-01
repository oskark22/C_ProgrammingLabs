// Dan Koskiranta
// 3 February 2022
// Lab 5a.c

#include <stdio.h>

int main()
{
	const float MUL = 1.8;
	const int ADD = 32;
	float Celsius;
	float Fahrenheit;

	printf("Please enter a temperature in Celsius:");
	scanf("%f",&Celsius);

	// Convert Celsius to Fahrenheit
	Fahrenheit = MUL * Celsius + ADD;
	printf("The temperature in Fahrenheit is %f\n",Fahrenheit);
	return 0;

}