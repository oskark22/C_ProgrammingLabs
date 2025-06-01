// Dan Koskiranta
// 10 March 2022
// Lab 12a.c


#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>

float computeArea(float rad);
int main()
{
	float r, a;
	

	printf("Please enter the radius: ");
	scanf("%f", &r);

	a = computeArea(r);
	printf("The area is %.f\n", a);
	
	return 0;

}

float computeArea(float rad)
{
	 float area = M_PI * pow(rad, 2);
	 return area;
}
