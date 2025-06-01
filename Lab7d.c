// Dan Koskiranta
// 10 February 2022
// Lab 7d.c


#include <stdio.h>

int main()
{
	int counter = 1, sum = 0;

	while (counter <= 10)
	{
		sum = counter + sum;
		counter++;
	}
	printf("The sum of the integers from 1 to 10 is: ");
	printf("%i", sum);
	return 0;

}