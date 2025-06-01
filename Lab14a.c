// Dan Koskiranta
// 31 March 2022
// Lab 14a.c

#include<stdio.h>
#include<stdbool.h>
bool IsOdd(int no);

int main()
{
	int number;
	bool ans;

	for (int counter = 1; counter <= 5; counter++)
	{
		printf("\nPlease enter a number: ");
		scanf("%i", &number);
		ans = IsOdd(number);

		if (ans == 1)
		{
			printf("\nNumber is odd");
		}
		else
		{
			printf("\nNumber is not odd");
		}
	}	
	return 0;
}
bool IsOdd(int no)
{
	bool result;

	if (no % 2 != 0)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return result;
}


