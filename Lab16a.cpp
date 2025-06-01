// Dan Koskiranta
// 7 April 2022
// Lab 16a.cpp

#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>

int main()
{
	const int SIZE = 3;
	
	double height[SIZE];
	double radius[SIZE];
	double volume[SIZE];

	printf("\nPlease enter the values for height and radius\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%i: ", i);
		scanf("%lf%lf", &height[i], &radius[i]);	
	}

	// Find the volume of the cylinders
	for (int i = 0; i < SIZE; i++)
	{
		volume[i] = M_PI * pow(radius[i], 2) * height[i];
	}
	
	// Print out the arrays in tabular format
	printf("\nCylinder\tHeight\t\tRadius\t\tVolume\n");
	for (int i = 0; i < SIZE; i++)
	{
		int Cylinder = i + 1;
		printf("%i\t\t%.2f\t\t%.2f\t\t%.2f\n", Cylinder, height[i], radius[i], volume[i]);
	}
	return 0;
}

