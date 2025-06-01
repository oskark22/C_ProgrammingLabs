// Dan Koskiranta
// 3 February 2022
// Lab 5b.c

#include <stdio.h>

int main()
{
	const float PI = 3.14;
	float radius;
	float volume;

	printf("Please enter a radius of a sphere:");
	scanf("%f",&radius);

	
	volume = 1.33 * PI * radius * radius * radius;
	printf("The volume is %f\n",volume);
	return 0;

}