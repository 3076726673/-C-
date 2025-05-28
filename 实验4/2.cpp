#include<stdio.h>

void  interchange(int x[],int y);

int main()
{
	printf("ĞÕÃû£ºÖì¿¡¼ª£»Ñ§ºÅ£º20225636\n");
	int a,b,c[20];
	printf("Please input number n:");
	scanf("%d",&a);
	printf("Please input these numbers: ");
	for(b=0;b<a;b++)
		scanf("%d",&c[b]);
	interchange(c,a);
	printf("Now, the reversed order is:");
	for(b=0;b<a;b++)
		printf(" %d",c[b]);
	return 0;
}
void  interchange(int x[],int y)
{
	int a,b;
	for(a=0;a<y/2;a++)
	{
		b=x[a];
		x[a]=x[y-1-a];
		x[y-1-a]=b;
	}
	
}
