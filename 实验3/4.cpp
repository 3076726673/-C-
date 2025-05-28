#include<stdio.h>

int IsPrime(int x);
int IsPrimeSum(int x);

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",IsPrimeSum(n));
	return 0;
}
int IsPrime(int x)
{
	int a;
	if(x==1)
		return 0;
	if(x==2)
		return 2;
	for(a=2;a<=x/2;a++)
		if(x%a==0)
			return 0;
	return x;
}
int IsPrimeSum(int x)
{
	int a,b=0;
	for(a=1;a<=x;a++)
		b+=IsPrime(a);
	return b;
} 
