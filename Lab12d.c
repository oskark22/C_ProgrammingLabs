// Dan Koskiranta
// 11 March 2022
// Lab 12d.c


#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>

float hypotenuse(float side1, float side2);


int main()
{
	float h;
	float s1, s2;
	

	for (int counter = 1; counter <= 3; counter++)
	{
		printf("\n\nPlease enter the two sides for a right angled triangle : ");
		scanf("%f%f", &s1, &s2);
		h = hypotenuse(s1, s2);
	    
		printf("\nThe hypotenuse for triangle is %.2f", h, hypotenuse(s1, s2));	
	}


	return 0;

}

float hypotenuse(float side1, float side2)
{
	float hypotenuse = sqrt(pow(side1, 2) + pow(side2, 2));
	return hypotenuse;
}
