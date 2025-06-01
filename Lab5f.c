// Dan Koskiranta
// 3 February 2022
// Lab 5f.c

#include <stdio.h>

int main()
{
	int option;

	printf("Please select one of the following options:\n1 Hill 16\n2 Hogan Stand\n3 Daven Stand\n4 Cusack Stand\n");
	scanf("%i", &option);

	switch (option)
	{
	case 1:
		printf("You have a place in Hill 16");
		break;
	case 2:
		printf("You have a place in the Hogan Stand");
		break;
	case 3:
		printf("You have a place in the Daven Stand");
		break;
	case 4:
		printf("You have a place in the Cusack stand");
		break;
	case 0:
		printf("Thank you. Goodbye.");
		break;
	default:
		printf("Incorrect option");
		break;
	}
	
	return 0;

}