// Dan Koskiranta
// 10 February 2022
// Lab 7b.c


#include <stdio.h>

int main()
{
	int counter = 10;

	printf("The numbers from 10 to 1 are:\n\n");

	do
	{
		printf("%i ", counter);
		counter--;
	} while (counter >= 1);

	return 0;

}