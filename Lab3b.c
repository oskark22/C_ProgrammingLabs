// Dan Koskiranta
// 27 January 2022
// Lab 3b.c

#include <stdio.h>

int main()
{
	const int a = 8, b = 3, c = -5;
	int answer;

	// Add the values
	answer = a + b + c;
	printf("%i\n", answer);

	answer = 2 * b + 3 * (a - c);
	printf("%i\n", answer);

	// Divide the values a and b
	answer = a / b;
	printf("%i\n", answer);

	// Get the remainder of the variables a and b
	answer = a % b;
	printf("%i\n", answer);

	answer = a / c;
	printf("%i\n", answer);

	answer = a % c;
	printf("%i\n", answer);

	answer = a * b / c;
	printf("%i\n", answer);

	answer = a * (b / c);
	printf("%i\n", answer);

	answer = (a * c) % b;
	printf("%i\n", answer);


	answer = a * (c % b);
	printf("%i\n", answer);

	return 0;
}