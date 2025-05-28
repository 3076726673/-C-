#include<stdio.h>
int main()
{
	printf("ĞÕÃû£ºÖì¿¡¼ª£¬Ñ§ºÅ£º20225636\n");
	int a,b,c,d;
	d=0;
	printf("Input your birth year:");
	scanf("%d",&a);
	printf("Input this year:");
	scanf("%d",&b);
	for(c=a;c<=b;c++)
	{
		if((c%4==0)&&((c%100)!=0)||c%400==0)
			{
				printf("%d\n",c);
				d++;
			}
	}
	printf("count=%d",d);
	return 0; 
}
