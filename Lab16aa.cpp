// Lab 16a.cpp

#include<stdio.h>
#define _USE_MATH_DEFINES
#include<math.h>

int main()
{
	const int SIZE = 3;

	double volume[SIZE];
	double height[SIZE];
	double radius[SIZE];

	printf("Please enter the heights and radii for the cylinders:\n ");
	for (int i = 0; i < SIZE; i++)
	{
		int num = i + 1;

		printf("\nHeight for cylinder %i = ", num);
		scanf("%lf", &height[i]);
		printf("\nRadius for cylinder %i = ", num);
		scanf("%lf", &radius[i]);
	}
	
	for (int i = 0; i < SIZE; i++)
	{
		volume[i] = M_PI * pow(radius[i], 2) * height[i];
	}
	
	printf("\nCylinder\tHeight\t\tRadius\t\tVolume\n");
	for (int i = 0; i < SIZE; i++)
	{
		int cylinder = i + 1;
		printf("%i\t\t%.2f\t\t%.2f\t\t%.2f\n", cylinder, height[i], radius[i], volume[i]);

	}
	return 0;
} 


	


