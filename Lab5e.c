// Dan Koskiranta
// 3 February 2022
// Lab 5e.c

#include <stdio.h>

int main()
{
	char character;

	printf("Please enter a character:");
	scanf(" %c", &character);

	if (character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U')
	{
		printf("it's a vowel");
	}
	else if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
	{
		printf("it's a vowel");
	}
	else if (character == '+' ||character == '-' ||character == '*'||character == '/' ||character == '%')
	{
		printf("It is an operator");
	}
	else
	{
		printf("It is something else");
	}
	return 0;

}