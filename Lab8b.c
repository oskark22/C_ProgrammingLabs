// Dan Koskiranta
// 11 February 2022
// Lab 8b.c


#include <stdio.h>

int main()
{
	
	int product = 1;
	int counter;

	for (counter = 1; counter <= 15; counter++)
	{
		product = product * counter;
		// Multiply by odd integers
		counter += 1;
	}
	printf("The product is %i", product);
	

	return 0;

}