#include<stdio.h>
#include<math.h>

void factrial();
long Fact(int n);

int main()
{
	factrial();
	return 0;
}
void factrial()
{
	int a,b,c,d;
	for(a=100;a<=999;a++)
	{
		b=a/100;
		d=a%10;
		c=(a-b*100)/10;
		if(a==Fact(b)+Fact(c)+Fact(d))
			printf("%d\n",a);
	}
}
long Fact(int n)
{
	int a,b;
	b=1;
	for(a=1;a<=n;a++)
		b*=a;
	return b;
}
