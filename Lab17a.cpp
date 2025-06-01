// Lab 17 a

#include<stdio.h>


bool isStackFull(int s);
bool isStackEmpty();
void push(int e);
int pop();
void displayStack();


// Global variables
int stack[100];
int stackSize;
int top = 0;

int main()
{
	int choice, item;
	int count = 0;
	bool alt;

	printf("\t\tImplementation of stack\n");
	printf("\nPlease enter the size of the stack: ");
	scanf("%d", &stackSize);
	if (stackSize > 100)
	{
		printf("\nThe stacksize cannot be greater than 100");
	}
	else
	{
		printf("\nMain Menu\n1.Push\n2.Pop\n3.Display\n\n4.Exit\n");
		printf("\nPlease enter your choice: ");
		scanf("%d", &choice);
		while (choice != 4)
		{
			switch (choice)
			{
			case 1:
				if (count == stackSize)
				{
					printf("\n\t\t\tTHE STACK IS FULL!\n");
				}
				else
				{
					printf("\nPlease enter the item to be pushed: ");
					scanf("%d", &item);
					push(item);
				}
				count++;
				break;

			case 2:
				if (top < 1)
				{
					printf("\n\t\t\tTHE STACK IS EMPTY!\n");
				}
				else
				{
					// Pop an integer from the stack
					pop();
					printf("\nThe popped element is %d\n", stack[top]);
					top--;
				}
				break;

			case 3:
				// Display the contents of the stack
				displayStack();
				break;

			case 5:
				alt = isStackFull(stackSize);
				if (alt == 1)
				{
					printf("\n\t\t\tTHE STACK IS FULL!\n");
				}
				else if (alt == 0)
				{
					printf("\n\t\t\tTHE STACK IS EMPTY!");
				}
				break;

			default:
				printf("\nPlease enter a valid choice.\n");
				break;
			}
			printf("\n\nMain Menu\n1.Push\n2.Pop\n3.Display\n\n4.Exit\n");
			printf("\nPlease enter your choice: ");
			scanf("%d", &choice);
		}
		printf("\nPress any key to continue...\n");
		return 0;
	}
}
	
void push(int e)
{
	top = top + 1;
	stack[top] = e;
	
}

int pop()
{
	int num;

	num = stack[top];
	return num;

	
}

void displayStack()
{
	if (top > 0)
	{
		printf("\nThe stack is: (from top to bottom)\n");
		for (int i = top; i > 0; i--)
		{
			printf("\t%d", stack[i]);
		}
	}
	else
	{
		printf("\t\t\tTHE STACK IS EMPTY!\n");
	}
}

bool isStackFull(int s)
{
	if (top >= s)
	{
		return 1;
	}
	else if (top < 1)
	{
		return 0;
	}
}