// Dan Koskiranta
// 27 January 2022
// Lab 3d.c

#include <stdio.h>

int main()
{
	int x = 0, y = 1;

	x +=  y;
	x++;
	x += y;
	y--;

	// Print the value of x
	printf("x now is %d\n", x);

	printf("y now is %d\n", y);
	return 0;
}