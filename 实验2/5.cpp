#include<stdio.h>
int main()
{
	printf("ÐÕÃû£ºÖì¿¡¼ª£¬Ñ§ºÅ£º20225636\n");
	int n,b=1;
	printf("Input days:");
	scanf("%d",&n);
	while(n>1)
	{
		b=(b+1)*2;
		n--;
	}
	printf("Num_Peach=%d\n",b);
	return 0; 
}
