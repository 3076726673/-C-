#include<stdio.h>
#include<math.h>

int main()
{
	printf("�������쿡����ѧ�ţ�20225636\n");
	char d,e;
	int b,c;
	double a;
	printf("Please input the length of the rope: ");
	scanf("%lf%c",&a,&d);
	printf("Please input the days: ");
	scanf("%d%c",&b,&e);
	c=pow(2,b);
	printf("Rest Length = %lf\n",1.0*a/c);
	return 0;
}
