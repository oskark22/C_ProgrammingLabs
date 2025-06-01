// Dan Koskiranta
// 21 January 2022
// Lab 2d.c

#include <stdio.h>

int main()
{
	int number;
	int dble;

	printf("Enter the number: ");
	scanf("%d", &number);

	dble = number * 2;

	printf("The value of %i doubled is %i\n", number, dble);
	return 0;

}