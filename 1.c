// Accept radius and calculate area and circumference of a circle 
#include <stdio.h>
void main()
{
	float radius;
	float pi=3.142;
	printf("Enter the radius of the circle: ");
	scanf("%f",&radius);
	float area = pi*radius*radius;
	float circum = 2*pi*radius;
	printf("Area of the circle: %.2f\n",area);
	printf("Circumference of the circle: %.2f\n",circum);
}
