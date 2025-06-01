// Dan Koskiranta
// 11 February 2022
// Lab 8e.c


#include <stdio.h>

int main()
{
	int fact = 1;
	int counter = 1;

	printf("n\t\tn!\n\n");

	// Generate a table for first 10 factorials
	while(counter <= 10)
	{
		fact = counter * fact;
		printf("%i\t\t%i\n", counter, fact);
		counter++;
	}
	return 0;

}