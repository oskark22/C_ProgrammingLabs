// Dan Koskiranta
// 23 February 2022
// Lab 11b.c


#include<stdio.h>
#include<math.h>


int main()
{

	const float PI = 3.14;
    float volume1, volume2, volume3, volume4;
    float r1, r2, r3, r4;
    float area1, area2, area3, area4;
    

    printf("Please enter the radius for sphere 1: ");
    scanf("%f", &r1);
    area1 = 4 * PI * r1 * r1;
    volume1 = 1.33 * PI * r1 * r1 * r1;

    printf("\nPlease enter the radius for sphere 2: ");
    scanf("%f", &r2);
    area2 = 4 * PI * r2 * r2;
    volume2 = 1.33 * PI * r2 * r2 * r2;

    printf("\nPlease enter the radius for sphere 3: ");
    scanf("%f", &r3);
    area3 = 4 * PI * r3 * r3;
    volume3 = 1.33 * PI * r3 * r3 * r3;

    printf("\nPlease enter the radius for sphere 4: ");
    scanf("%f", &r4);
    area4 = 4 * PI * r4 * r4;
    volume4 = 1.33 * PI * r4 * r4 * r4;

     printf("\nSphere\tRadius\t\tSurface Area\t\tVolume\n");
     // Print the surface area and volume of the spheres
     printf("1\t%f\t%.2f\t\t\t%.2f\n2\t%f\t%.2f\t\t\t%.2f\n3\t%f\t%.2f\t\t\t%.2f\n4\t%f\t%.2f\t\t\t%.2f", r1, area1, volume1, r2, area2, volume2, r3, area3, volume3, r4, area4, volume4);
		
     return 0;

}