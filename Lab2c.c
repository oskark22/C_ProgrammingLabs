// Dan Koskiranta
// 21 January 2022
// Lab 2c.c

#include <stdio.h>

int main()
{
	int value1;
	int value2;
	int sum;
	

	// Enter the values
	printf("Please enter value1: ");
	scanf("%d",&value1);

	printf("Please enter value2: ");
	scanf("%d", &value2);
	sum = value1 + value2;

	// Add the values value1 and value2 
	printf("The sum of %i and %i is %i\n", value1, value2, sum);

	return 0;

}