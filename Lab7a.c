// Dan Koskiranta
// 10 February 2022
// Lab 7a.c


#include <stdio.h>

int main()
{
	int counter = 10;

	printf("The numbers from 10 to 1 are:\n\n");

	while (counter >= 1)
	{
		printf("%i ",counter);
		counter--;
	}

	return 0;

}