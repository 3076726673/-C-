#include<stdio.h>

int strCMP(char x[],char y[]);

int main()
{
	printf("ÐÕÃû£ºÖì¿¡¼ª£»Ñ§ºÅ£º20225636\n");
	int c;
	char a[1000],b[1000];
	printf("Please input two strings: \n");
	scanf("%s",a);
	scanf("%s",b);
	c=strCMP(a,b);
	if(c==0)
		printf("They are the same.\n");
	else
		printf("They are different and the difference is %d\n",c);
	printf("\n");
	return 0;
}
int strCMP(char x[],char y[])
{
	int a,b;
	for(b=0;b<1000;b++)
	{
		a=x[b]-y[b];
		if(a!=0)
			return a;
		if((x[b]=='\0')&&(y[b]=='\0'))
			break;
	} 
	return 0;
}
