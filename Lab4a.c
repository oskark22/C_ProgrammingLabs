// Dan Koskiranta
// 28 January 2022
// Lab 4a.c

#include <stdio.h>

int main()
{
	int grade;

	printf("Please enter a grade: ");
	scanf("%d",&grade);

	if (grade >= 40)
	{
		printf("Student Passed\n\n");
	}
	return 0;
}