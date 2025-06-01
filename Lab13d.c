// Dan Koskiranta
// 12 March 2022
// Lab 13d.c


#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>


float roots1(float aVal, float bVal, float cVal);
float roots2(float aVal, float bVal, float cVal);

int main()
{
	float a, b, c, x1, x2;

	for (int counter = 1; counter <= 3; counter++)
	{
		printf("\n\nPlease enter values for a, b and c: ");
		scanf("%f%f%f", &a, &b, &c);

		x1 = roots1(a, b, c);
		x2 = roots2(a, b, c);

		printf("\nThe value for x1 is %.2f", x1, roots1(a, b, c));
		printf("\nThe value for x2 is %.2f", x2, roots2(a, b, c));
	}
	
	
	return 0;

}

float roots1(float aVal, float bVal, float cVal)
{

	float root1 = (-bVal + sqrt(bVal * bVal - 4 * aVal * cVal)) / (2 * aVal);
	return root1;
}


float roots2(float aVal, float bVal, float cVal)
{
	float root2 = (-bVal - sqrt(bVal * bVal - 4 * aVal * cVal)) / (2 * aVal);
	return root2;
}

