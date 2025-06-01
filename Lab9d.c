// Dan Koskiranta
// 18 February 2022
// Lab 9d.c


#include <stdio.h>

int main()
{
	int length;
	int max = 0;
	int min = 0;
	int parts = 0;
	float total = 0;
	float average;

	printf("Please enter component length in mm: ");
	scanf("%i", &length);

	// Enter -1 to exit the while loop
	while (length != -1)
	{
		// if statement to determine the max and min lengths
		if (max < length)
		{
			max = length;
		}
		else
		{
			min = length;
		}
		total += length;
		parts++;

		printf("Please enter component length in mm: ");
		scanf("%i", &length);
	}
	// If parts is not equal to 0, divide total by parts
	if(parts!=0)
	{ 
		// Display no. of parts, average, max and min lengths
		printf("\nNo of parts tested:\t %i", parts);
		average = total / parts;
		printf("\nAvg length:\t\t %.2fmm", average);
		printf("\nMax length:\t\t %imm", max);
		printf("\nMin length:\t\t %imm", min);
	}
	return 0;

}