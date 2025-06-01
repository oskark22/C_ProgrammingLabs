// Dan Koskiranta
// 10 February 2022
// Lab 7f.c


#include <stdio.h>

int main()
{
	int number = 0;
	int counter = 1;
	int ten, hundred, thousand;

	printf("N\t10*N\t100*N\t1000*N\n\n");

	while(counter <= 5)
	{
		number++;
		ten = number * 10;
		hundred = number * 100;
		thousand = number * 1000;
		// Print table of values
		printf("%i\t%i\t%i\t%i\t\n", number, ten, hundred, thousand);
		counter++;
	}
	return 0;

}