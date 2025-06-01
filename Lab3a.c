// Dan Koskiranta
// 27 January 2022
// Lab 3a.c

#include <stdio.h>

int main()
{
	int x, answer;

	printf("\n**************************");
    printf("\nPlease Enter a number: ");
	scanf("%d",&x);
	printf("\n**************************");

	answer = 4 * x * x -  x + 6;
	printf("\nThe answer for %i is %i\n\a", x, answer);
	printf("\n**************************");
	return 0;
	


}