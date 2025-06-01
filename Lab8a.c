// Dan Koskiranta
// 11 February 2022
// Lab 8a.c


#include <stdio.h>

int main()
{
	
	int sum = 0;
	int counter = 10;
		
	do
	{
		sum = sum + counter;
		counter += 2;
	} while (counter <= 20);

	printf("%i ", sum);

	return 0;

}