// Revision

#include<stdio.h>


int main()
{
	int length[100], i, n, min, max, parts = 0, total = 0;
	float avg;

	printf("Please enter the size of the array: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		int part = i + 1;
		printf("\nEnter component length in mm: ");
		scanf("\n%d", &length[i]);
		total = total + length[i];
	}
	avg = (float)total / n;
	
	min = max = length[0];
	for (i = 1; i < n; i++)
	{
		if (min > length[i])
		{
			min = length[i];
		}
		else if (max < length[i])
		{
			max = length[i];
		}
	}
	printf("\nNo of parts tested:\t%i", n);
	printf("\nAvg length:\t\t%.2fmm", avg);
	printf("\nMax length:\t\t%dmm", max);
	printf("\nMin length:\t\t%dmm", min);

	return 0;
}