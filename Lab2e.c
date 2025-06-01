// Dan Koskiranta
// 21 January 2022
// Lab 2e.c

#include <stdio.h>

int main()
{
	int age;
	int birthYear;
	const int THIS_YEAR = 2022;

	printf("Please enter your age on Dec 31 this year: ");
	scanf("%d", &age);

	birthYear = THIS_YEAR - age;
	printf("Your birthyear is %i\n ", birthYear);
	
	return 0;

}