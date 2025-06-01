// Dan Koskiranta
// 3 February 2022
// Lab 5d.c

#include <stdio.h>

int main()
{
	char grade;

	printf("Please enter a grade:");
	scanf(" %c", &grade);

	switch (grade)
	{
	case 'A':
	case 'a':
		printf("excellent");
		break;
	case 'B':
	case 'b':
		printf("good");
		break;
	case 'C':
	case 'c':
		printf("fair");
		break;
	case 'D':
	case 'd':
		printf("failure");
		break;
	default:
		printf("incorrect grade entered");
		break;
	}
	return 0;

}