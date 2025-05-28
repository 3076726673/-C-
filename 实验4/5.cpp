#include<stdio.h>

int CountRepeatNum(int x, int y[]);

int main()
{
	printf("ĞÕÃû£ºÖì¿¡¼ª£»Ñ§ºÅ£º20225636\n");
	int a[100];int b;
	printf("Input n:\n");
	scanf("%d",&b);
	CountRepeatNum(b,a);
	return 0;
}
int CountRepeatNum(int x,int y[])
{
	int a=0,b=0,c=0;
	while(b<100)
	{
		y[b]=x%10;
		x=x/10;
		if(x==0)
			break;
		b++;
	}
	for(a=0;a<=b;a++)
		for(c=a+1;c<=b;c++)
			if(y[a]==y[c])
			{
				printf("Repeated digit!\n");
				return 0;
			}
	printf("No repeated digit!\n");
}
