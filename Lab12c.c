// Dan Koskiranta
// 11 March 2022
// Lab 12c.c


#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>

void fillCharacter(int number, char character);


int main()
{
	int n;
	char ch;
	
	printf("Please enter a number: ");
	scanf("%i", &n);
	printf("Please enter a character: ");
	scanf(" %c", &ch);

	fillCharacter(n, ch);

	return 0;

}

void fillCharacter(int number, char character)
{
	

	for (int rows = 1; rows <= number; rows++)
	{
		for (int columns = 1; columns <= number; columns++)
		{
			printf(" %c", character);
		}
		printf("\n");

	}
}
