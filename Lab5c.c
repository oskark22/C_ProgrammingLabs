// Dan Koskiranta
// 3 February 2022
// Lab 5c.c

#include <stdio.h>

int main()
{
	char grade;

	printf("Please enter a grade:");
	scanf(" %c", &grade);

	if (grade == 'A'||grade == 'a')
	{
		printf("excellent");
	}
	else if (grade == 'B'||grade == 'b')
	{
		printf("good");
	}
	else if(grade == 'C'||grade == 'c')
	{
		printf("fair");
	}
	else if (grade == 'D'||grade == 'd')
	{
		printf("poor");
	}
	else if (grade == 'F'||grade == 'f')
	{
		printf("failure");
	}

	return 0;

}