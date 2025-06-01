// Lab 16c.cpp

#include<stdio.h>
#define _USE_MATH_DEFINES
#include<math.h>
#include<stdlib.h>
#include<conio.h>

void printSquare(int width);
void printTriangleInc();
void printTriangleDec();
float calcLength(float xVal[2], float yVal[2]);
float calcSlope(float xVal[2], float yVal[2]);
float computeArea(int rad);
float computeCircum(int rad);

int main()
{
	const int SIZE = 2;

	float xValue[SIZE];
	float yValue[SIZE];
	float slope, length, area, circum;
	char option, shape, line, circle;
	int size, radius;

	printf("A\tPrint Shapes\nB\tLine Functions\nC\tCircle Functions\n\nQ\tExit");
	printf("\nPlease choose: ");
	scanf(" %c", &option);
	system("cls");
	while (option != 'Q' && option != 'q')
	{
		switch (option)
		{
		case 'A':
		case 'a':
			printf("\nS\tSquare\nI\tTriangle Increase\nD\tTriangle Decrease");
			printf("\nPlease choose: ");
			scanf(" %c", &shape);
			switch (shape)
			{
			case 'S':
			case 's':
				printf("\nPlease enter size: ");
				scanf("%i", &size);
				printSquare(size);
				break;

			case 'I':
			case 'i':
				printTriangleInc();
				break;

			case 'D':
			case 'd':
				printTriangleDec();
				break;

			default:
				printf("\nYou have to choose from the options available!\n");
				break;

			}
			break;

		case 'B':
		case 'b':
			printf("\nS\tCalculate Line Slope\nL\tCalculate Line Length");
			printf("\nPlease choose: ");
			scanf(" %c", &line);
			switch (line)
			{
			case 'S':
			case 's':
				printf("\nPlease enter the x and y values for the line slope:\n");
				for (int i = 0; i < SIZE; i++)
				{
					int num = i + 1;

					printf("\nValue for x value %i = ", num);
					scanf("%f", &xValue[i]);
					printf("\nValue for y value %i = ", num);
					scanf("%f", &yValue[i]);
					slope = calcSlope(xValue, yValue);
				}
				printf("\nThe slope is %.2f\n", slope);
				break;

			case 'L':
			case 'l':
				printf("\nPlease enter the x and y values for the line length:\n");
				for (int i = 0; i < SIZE; i++)
				{
					int num = i + 1;

					printf("\nValue for x value %i = ", num);
					scanf("%f", &xValue[i]);
					printf("\nValue for y value %i = ", num);
					scanf("%f", &yValue[i]);
					length = calcLength(xValue, yValue);
				}
				printf("\nThe line length is %.2f\n", length);
				break;

			default:
				printf("\nYou have to choose from the options available!");
				break;
			}
			break;

		case 'C':
		case 'c':
			printf("\nPlease enter radius:  ");
			scanf("%i", &radius);
			printf("\nA\tArea\nC\tCircumference\n");
			printf("\nPlease choose: ");
			scanf(" %c", &circle);
			switch (circle)
			{
			case 'A':
			case 'a':
				area = computeArea(radius);
				printf("\nArea of circle is: %.2f\n", area);
				break;

			case 'C':
			case 'c':
				circum = computeCircum(radius);
				printf("\nThe circumference of the circle is: %.2f\n", circum);
				break;

			default:
				printf("\nYou have to choose from the options available!\n");
				break;
			}
			break;

		default:
			printf("\nPlease choose from the options available!\n");
			break;
		}
		printf("\nA\tPrint Shapes\nB\tLine Functions\nC\tCircle Functions\n\nQ\tExit");
		printf("\nPlease choose: ");
		scanf(" %c", &option);
		system("cls");
	}
	printf("\nYou have exited the menu. GOODBYE!\n");
	return 0;
} 

void printSquare(int width)
{
	for (int rows = 1; rows <= width; rows++)
	{
		for (int columns = 1; columns <= width; columns++)
		{
			printf("*");
		}
		printf("\n");
	}
}
	
void printTriangleInc()
{
	for (int rows = 1; rows <= 6; rows++)
	{
		for (int columns = 1; columns <= rows; columns++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void printTriangleDec()
{
	for (int rows = 1; rows <= 6; rows++)
	{
		for (int columns = 6; columns >= rows; columns--)
		{
			printf("*");
		}
		printf("\n");
	}
}

float calcSlope(float xVal[2],  float yVal[2])
{
	float slp = (yVal[1] - yVal[0]) / (xVal[1] - xVal[0]);
	return slp;
}

float calcLength(float xVal[2], float yVal[2])
{
	float lgt = sqrt(pow(xVal[1] - xVal[0], 2) + pow(yVal[1] - yVal[0], 2));
	return lgt;
}

float computeArea(int rad)
{
	float space = (float)M_PI * pow(rad, 2);
	return space;
}

float computeCircum(int rad)
{
	float circumference = (float)2 * M_PI * rad;
	return circumference;
}