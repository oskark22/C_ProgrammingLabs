// Dan Koskiranta
// 24 February 2022
// Lab 11c.c


#include<stdio.h>
#include<math.h>


int main()
{
	const float PI = 3.14;
	float sinValue, cosValue, tanValue, radianVal, degreeVal;
	char option;

	printf("S\tSine\nC\tCosine\nT\tTan\n\nPlease choose from the options available: ");
	scanf(" %c", &option);

		switch (option)
		{
		case 'S':
		case 's':
			printf("\nPlease enter an angle: ");
			scanf("%f", &degreeVal);

			radianVal = degreeVal * (PI / 180);
			sinValue = sin(radianVal);
			printf("\nSine of %f = %.2f", degreeVal, sinValue);
			break;

		case 'C':
		case 'c':
			printf("\nPlease enter an angle: ");
			scanf("%f", &degreeVal);

			radianVal = degreeVal * (PI / 180);
			cosValue = cos(radianVal);
			printf("\nCosine of %f = %.2f", degreeVal, cosValue);
			break;

		case 'T':
		case 't':
			printf("\nPlease enter an angle: ");
			scanf("%f", &degreeVal);

			radianVal = degreeVal * (PI / 180);
			tanValue = tan(radianVal);
			printf("\nTan of %f = %.2f", degreeVal, tanValue);
			break;

		default:
			printf("Please choose from the options available");
			break;



	    }
		
        return 0;

}