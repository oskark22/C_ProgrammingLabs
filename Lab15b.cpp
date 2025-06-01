// Dan Koskiranta
// 1 April 2022
// Lab 15b.cpp

#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>

int main()
{
	const int HEIGHT = 3;
	const int BASE = 3;
	const int AREA = 3;
	

	float height[HEIGHT];
	float base[BASE];
	float area[AREA];

	printf("\nPlease enter the values for height\n");
	for (int i = 0; i < HEIGHT; i++)
	{
		printf("%i: ", i);
		scanf("%f", &height[i]);	
	}
	printf("\nPlease enter the values for base\n");
	for (int i = 0; i < BASE; i++)
	{
		printf("%i: ", i);
		scanf("%f", &base[i]);
	}
	
	for (int i = 0; i < AREA; i++)
	{
		area[i] = height[i] * base[i] / 2;
	}
	
	printf("\nTriangle\tHeight\t\tBase\t\tArea\n");
	for (int i = 0; i < 3; i++)
	{
		int Triangle = i + 1;
		printf("%i\t\t%.2f\t\t%.2f\t\t%.2f\n", Triangle, height[i], base[i], area[i]);
	}
	
	
	return 0;
}

