#include<stdio.h>
#define pi 3.14
void main()
{
	float radius;
	printf("enter radius");
	scanf("%f",&radius);
	printf("the diameter is %f\n",2*radius);
	printf("the circumference is %f\n",2*pi*radius);
	printf("the area is %f",pi*radius*radius);
	
}