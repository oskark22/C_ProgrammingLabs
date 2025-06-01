// Dan Koskiranta
// 10 February 2022
// Lab 7c.c


#include <stdio.h>

int main()
{
	int counter;

	printf("The numbers from 10 to 1 are:\n\n");

	for (counter = 10; counter >= 1; counter--)
	{
		printf("%i ", counter);
	}
	return 0;

}