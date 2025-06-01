// Dan Koskiranta
// 28 January 2022
// Lab 4d.c

#include <stdio.h>

int main()
{
	int num;
	

	printf("Please enter a number: ");
	scanf("%d", &num);

	

	if (num %2 == 0)
	{
		printf("the number is even");
	}
	else
	{
		printf("the number is odd");
	}
	return 0;
}