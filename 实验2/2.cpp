#include<stdio.h>
int main()
{
	printf("ĞÕÃû£ºÖì¿¡¼ª£¬Ñ§ºÅ£º20225636\n");
	int n,a,b;
	scanf("%d",&n);
	b=n;
	if(n<0||n>10000)
	{
		printf("error!\n");
		return 0;
	}
	for(a=0;a<=3;a++)
	{
		b/=10;
		if(b==0)
			break;
	}
	switch(a)
	{
		case 0:
			printf("%d:0-9\n",n);
			break;
		case 1:
			printf("%d:10-99\n",n);
			break;
		case 2:
			printf("%d:100-999\n",n);
			break;
		case 3:
			printf("%d:1000-9999\n",n);
			break;
	}
	return 0;
}
