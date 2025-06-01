// Dan Koskiranta
// 12 March 2022
// Lab 13c.c


#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>


float average(int num1, int num2);

int main()
{
	int n1, n2;
	float a;
	
		printf("\nPlease enter two numbers: ");
		scanf("%i%i", &n1, &n2);

		a = average(n1, n2);

		printf("\nThe average of the passed numbers is %.2f", a, average(n1, n2));
	
	return 0;

}

float average(int num1, int num2)
{
	float total = num1 + num2;
	float average = total / 2;
	return average;
}



