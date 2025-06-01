// Dan Koskiranta
// 23 February 2022
// Lab 11a.c


#include<stdio.h>
#include<math.h>


int main()
{

	const float PI = 3.14;
    float volume;
    float radius;

    printf("Please enter the radius of the sphere: ");
    scanf("%f", &radius);

     volume = 1.33 * PI * radius * radius * radius;
     printf("\nThe volume of the sphere is %.2f", volume);
		
     return 0;

}