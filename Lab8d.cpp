// Dan Koskiranta
// 11 February 2022
// Lab 8d.cpp


#include <stdio.h>

int main()
{
	int fact = 1;
	int counter;

	printf("n\t\tn!\n\n");

	// Generate a table for first 10 factorials
	for (counter = 1; counter <= 10; counter++)
	{
		fact = counter * fact;
		printf("%i\t\t%i\n", counter, fact);
	}
	return 0;

}