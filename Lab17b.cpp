// Lab 17 b

#include<stdio.h>
#include<string.h>


int main()
{
	char str1[] = "Hello";
	char str2[20];
	int e, n;

	printf("Please enter your name: ");
	// Use the fgets function to read a line of string
	fgets(str2, sizeof(str2), stdin);
	// Print the strings str1 and str2 to stdout
	printf("\n%s\t%s\n", str1, str2);
	// Print str1 in ASCII to stdout
	printf("\nThe ASCII value of %s is ", str1);
	for (int i = 0; str1[i] != '\0'; i++)
	{
		e = str1[i];
		printf("%d\t", e);
	}
	printf("\n\nThe ASCII value of %s is ", str2);
	for (int i = 0; str2[i] != '\0'; i++)
	{
		n = str2[i];
		printf("%d\t", n);
	}
	return 0;
}