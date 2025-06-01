// Dan Koskiranta
// 12 March 2022
// Lab 13b.c


#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>


float calcSlope(float xVal1, float xVal2, float yVal1, float yVal2);
float calcLength(float xVal1, float xVal2, float yVal1, float yVal2);

int main()
{
	float x1, x2, y1, y2, l, s;

	for (int counter = 1; counter <= 4; counter++)
	{
		printf("\n\nPlease enter the values for x1 and x2: ");
		scanf("%f%f", &x1, &x2);
		printf("\nPlease enter the values for y1 and y2: ");
		scanf("%f%f", &y1, &y2);

		s = calcSlope(x1, x2, y1, y2);
		l = calcLength(x1, x2, y1, y2);

		printf("\nThe slope of the line is %.2f", s, calcSlope(x1, x2, y1, y2));
		printf("\nThe length of the line is %.2f", l, calcLength(x1, x2, y1, y2));
	}

	return 0;

}

// Calculate slope
float calcSlope(float xVal1, float xVal2, float yVal1, float yVal2)
{
	float slope = (yVal2 - yVal1) / (xVal2 - xVal1);
	return slope;
}

// Calculate line length
float calcLength(float xVal1, float xVal2, float yVal1, float yVal2)
{
	float length = sqrt((xVal2 - xVal1) * (xVal2 - xVal1) + (yVal2 - yVal1) * (yVal2 - yVal1));
	return length;
}



