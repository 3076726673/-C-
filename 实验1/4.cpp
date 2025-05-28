#include<stdio.h>
#define Pi 3.14159
#define r 5.3
int main()
{
	double Area,Circumference;
	Area=Pi*r;
	Circumference=r*r*Pi/2.0;
	printf("Area=%.5f,Circumference=%.5f",Area,Circumference);
	return 0;
}
