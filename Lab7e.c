// Dan Koskiranta
// 10 February 2022
// Lab 7e.c


#include <stdio.h>

int main()
{
	int number;
	int counter = 1;

	printf("Please enter a number between 1 and 100:");
	scanf("%i", &number);


	
	while(counter <= 6)
	{
		printf("%i ", number);
		number++;
		counter++;
	}
	return 0;

}