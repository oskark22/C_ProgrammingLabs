// Dan Koskiranta
// 17 February 2022
// Lab 9a.c


#include <stdio.h>

int main()
{

	int counter = 1;
	char ch;



	while (counter <= 4)
	{
		printf("Please enter a character: ");
		scanf(" %c", &ch);
		printf("ASCII value for %c is %d\n\n", ch, ch);
		counter++;
	}
	return 0;

}