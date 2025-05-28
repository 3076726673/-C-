#include<stdio.h>

int main()
{
	printf("ÐÕÃû£ºÖì¿¡¼ª£»Ñ§ºÅ£º20225636\n");
	int a;
	float b,c,d;
	printf("Welcome to use this Express Fee Calculation System\n");
	printf("Please input the area ID and the Weight: ");
	scanf("%d,%f",&a,&b);
	if(a>=5||a<0)
	{
		printf("Error in Area ID! Please check and input the right ID.\n");
		return 0;
	}
	if(b<0)
	{
		printf("Error in Weight! Please check and input the right weight.\n");
		return 0;
	}
	c=(int)b/1;
	if(b>c)
		c++;
	if(c<=1)
	{
		switch(a)
		{
			case 0:
			case 1:
				{
					d=10;
					printf("Express Fee is:%.2f",d);
					break;
				}
			case 2:
			case 3:
			case 4:
				{
					d=15;
					printf("Express Fee is:%.2f",d);
					break;
				}
		}
	}
	if(c>1)
	{
		switch(a)
		{
			case 0:
				{
					d=10+(c-1)*3;
					printf("Express Fee is:%.2f",d);
					break;
				}
			case 1:
				{
					d=10+(c-1)*4;
					printf("Express Fee is:%.2f",d);
					break;
				}
			case 2:
				{
					d=15+(c-1)*5;
					printf("Express Fee is:%.2f",d);
					break;
				}
			case 3:
				{
					d=15+(c-1)*6.5;
					printf("Express Fee is:%.2f",d);
					break;
				}
			case 4:
				{
					d=15+(c-1)*10;
					printf("Express Fee is:%.2f",d);
					break;
				}
		}
	}
	
	return 0;
}
