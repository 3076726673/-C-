#include<stdio.h>
int main()
{
	int c,a,b;
	scanf("%d",&c);
	a=c/100;
	b=c-a*100;
	printf("a+b=%d\na-b=%d\na*b=%d\na/b=%.2f\na%b=%d\n",a+b,a-b,a*b,a/b/1.0,a%b);
	return 0;
}
