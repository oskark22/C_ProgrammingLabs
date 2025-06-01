// Dan Koskiranta
// 10 March 2022
// Lab 12b.c


#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>

float computeArea(float rad);
float ComputeCircum(float rad);

int main()
{
	float r1, r2, r3, r4, r5;
	float a1, a2, a3, a4, a5;
	float c1, c2, c3, c4, c5;
	

	printf("Please enter the first radius: ");
	scanf("%f", &r1);
	printf("\nPlease enter the second radius: ");
	scanf("%f", &r2);
	printf("\nPlease enter the third radius: ");
	scanf("%f", &r3);
	printf("\nPlease enter the fourth radius: ");
	scanf("%f", &r4);
	printf("\nPlease enter the fifth radius: ");
	scanf("%f", &r5);

	// Call and execute computeArea function
	a1 = computeArea(r1);
	a2 = computeArea(r2);
	a3 = computeArea(r3);
	a4 = computeArea(r4);
	a5 = computeArea(r5);

	c1 = ComputeCircum(r1);
	c2 = ComputeCircum(r2);
	c3 = ComputeCircum(r3);
	c4 = ComputeCircum(r4);
	c5 = ComputeCircum(r5);

	printf("\nCircle\tRadius\t\tArea\tCircumference\n");

	printf("1\t%f\t%.2f\t%.2f", r1, a1, c1, computeArea(r1), ComputeCircum(r1));
	printf("\n2\t%f\t%.2f\t%.2f", r2, a2, c2, computeArea(r2), ComputeCircum(r2));
	printf("\n3\t%f\t%.2f\t%.2f", r3, a3, c3, computeArea(r3), ComputeCircum(r3));
	printf("\n4\t%f\t%.2f\t%.2f", r4, a4, c4, computeArea(r4), ComputeCircum(r4));
	printf("\n5\t%f\t%.2f\t%.2f", r5, a5, c5, computeArea(r5), ComputeCircum(r5));

	return 0;

}

// Function to calculate area
float computeArea(float rad)
{
	 float area = M_PI * pow(rad, 2);
	 return area;
}

float ComputeCircum(float rad)
{
	float circum = 2 * M_PI * rad;
	return circum;
}
