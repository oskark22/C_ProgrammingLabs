// Dan Koskiranta
// 4 February 2022
// Lab 6b.c


#include <stdio.h>

int main()
{
	const float ticket1 = 15, ticket2 = 20, ticket3 = 35.50;
	char tickets;
	int amount;
	float total;

	printf("Enter number of tickets required:");
	scanf("%i", &amount);

	// No more than 8 tickets can be purchased per transaction
	if (amount <= 8)
	{
		// Allow the user to choose from the ticket options
		printf("\nH   Hill 16 (Price 15.00)\nD   Davin Stand(Price 20.00)\nC   Cusack Stand(Price 35.50)\n\nPlease select ticket category(H, D, C):");
		scanf(" %c", &tickets);

		switch (tickets)
		{
		case 'H':
		case 'h':
			total = amount * ticket1;
			printf("\nTotal Cost is %.2f", total);
			break;

		case 'D':
		case'd':
			total = amount * ticket2;
			printf("\nTotal Cost is %.2f", total);
			break;

		case 'C':
		case'c':
			total = amount * ticket3;
			printf("\nTotal Cost is %.2f", total);
			break;

		default:
			printf("\nIncorrect entry");
			break;
		}
	}
	else
	{
		printf("No more than 8 tickets can be purchased per transaction");
	}
	return 0;

}