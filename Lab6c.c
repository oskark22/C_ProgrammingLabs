// Dan Koskiranta
// 4 February 2022
// Lab 6c.c


#include <stdio.h>

int main()
{
	const float dollar = 1.2264, sterling = 0.6882, yen = 136.45;
	int amount, conversion;
	float total;

	printf("Enter euros to convert:");
	scanf("%i", &amount);
	
	printf("\n1   Dollars\n2   Sterling\n3   Yen\nPlease select the conversion type:");
	scanf("%i", &conversion);

	// Currency converter application
	switch (conversion)
	{
	case 1:
		total = dollar * amount;
		printf("\nConverted amount is %.2f dollars\n", total);
		break;
	case 2:
		total = sterling * amount;
		printf("\nConverted amount is %.2f pounds\n", total);
		break;
	case 3:
		total = yen * amount;
		printf("\nConverted amount is %.2f yens\n", total);
		break;
	default:
		printf("\nIncorrect Entry");
		break;
	}
	return 0;

}