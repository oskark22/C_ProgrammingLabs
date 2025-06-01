// Dan Koskiranta
// 31 March 2022
// Lab 14c.c



#include<stdio.h>
#include<stdbool.h>


bool IsUppercase(char ch);
int toLowerCase(char ch);


int main()
{
	char character;
	bool ans;
	char yesNo;


	printf("Please enter a character: ");
	scanf(" %c", &character);

	while (character != '$')
	{
		ans = IsUppercase(character);

		if (ans == 1)
		{
			printf("\nLetter is uppercase");
			printf("\nWould you like to convert to lowercase: ");
			scanf(" %c", &yesNo);
		
			if (yesNo == 'y' || yesNo == 'Y')
			{
				character = toLowerCase(character);
			    printf("\nThe letter is now %c", character, toLowerCase(character));
			}
		}
		else
		{
			printf("\nLetter is not uppercase");
		}
		printf("\n\nPlease enter a character: ");
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

int toLowerCase(char ch)
{
	return ch + 32;
}

