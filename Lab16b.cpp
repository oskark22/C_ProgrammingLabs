// Dan Koskiranta
// 7 April 2022
// Lab 16b.cpp

#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>

int main()
{
	const int SIZE = 4;

    float studentAverage[SIZE];
	int Quiz1[SIZE];
	int Quiz2[SIZE];
	int total1 = 0;
	int total2 = 0;
	int distinction = 0;
	float highest = 0;
	int stIndex = 1;
	int student = 0;

	printf("Please enter the quiz results for the first quiz:\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%i:", i);
		scanf("%i", &Quiz1[i]);
		total1 = total1 + Quiz1[i];
	}
	float avg1 = (float)total1 / SIZE;
	printf("\nThe average for quiz 1 is: ");
	printf("%.2f", avg1);

	printf("\nPlease enter the quiz results for the second quiz:\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%i:", i);
		scanf("%i", &Quiz2[i]);
		total2 = total2 + Quiz2[i];
	}
	float avg2 = (float)total2 / SIZE;
	printf("\nThe average for quiz 2 is: ");
	printf("%.2f", avg2);

	// Print the average quiz mark for each student
	for (int i = 0; i < SIZE; i++)
	{
		student = student + 1;
		studentAverage[i] = (float)(Quiz1[i] + Quiz2[i]) / 2;
		printf("\n\nThe average for student %i is %.2f ", student, studentAverage[i]);
	}

	// Find out how many students achieved distinction
	for (int i = 0; i < SIZE; i++)
	{
		if (studentAverage[i] >= 70)
		{
			distinction = distinction + 1;
		}
	}
	printf("\n\nThe number of students that achieved distinction: ");
	printf("%i", distinction);

	// Find the student with highest overall average mark
	for (int i = 0; i < SIZE; i++)
	{
		if (studentAverage[i] > highest)
		{
			highest = studentAverage[i];
			stIndex = stIndex + i;
		}
	}
	printf("\n\nThe student with highest overall average mark is student %i with mark %.2f: ", stIndex, highest);
	return 0;
}

