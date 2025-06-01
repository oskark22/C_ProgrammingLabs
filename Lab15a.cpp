// Dan Koskiranta
// 1 April 2022
// Lab 15a.cpp

#include<stdio.h>

int main()
{
	const int SIZE = 5;

	int a[SIZE] = {0};

	printf("The array is:\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%i ", a[i]);
	}

	printf("\nTh array is:\n");
	for (int i = 0; i < SIZE; i++)
	{
		a[i] = i + 1;
		printf("%i ", a[i]);
	}

	printf("\nTh array is:\n");
	for (int i = 0; i < SIZE; i++)
	{
		// Multiplies each element by 2
		a[i] = a[i] * 2;
		printf("%i ", a[i]);
	}
	
	return 0;
}

