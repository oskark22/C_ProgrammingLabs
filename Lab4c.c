// Dan Koskiranta
// 28 January 2022
// Lab 4c.c

#include <stdio.h>

int main()
{
	int num1, num2;
	

	printf("Please enter the first number: ");
	scanf("%d", &num1);

	printf("Please enter the second number: ");
	scanf("%d", &num2);

	if (num1 == num2)
	{
		printf("the numbers are equal");
	}
	else
	{
		printf("the numbers are not equal");
	}
	return 0;
}