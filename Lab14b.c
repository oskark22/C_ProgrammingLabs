// Dan Koskiranta
// 31 March 2022
// Lab 14b.c



#include<stdio.h>
#include<stdbool.h>


bool IsUppercase(char ch);


int main()
{
	char character;
	bool ans;

	printf("Please enter a character: ");
	scanf(" %c", &character);

	while (character != '$')
	{
		ans = IsUppercase(character);

		if (ans == 1)
		{
			printf("\nLetter is uppercase");
		}
		else
		{
			printf("\nLetter is lowercase");
		}
		printf("\nPlease enter a character: ");
		scanf(" %c", &character);

	}

	return 0;
}

bool IsUppercase(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
	{
		return true;
	}
	else
	{
		return false;
	}
}


