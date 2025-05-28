#include<stdio.h>

int main()
{
	printf("ĞÕÃû£ºÖì¿¡¼ª£»Ñ§ºÅ£º20225636\n");
	float a,b,c,d;
	printf("Input percent of A and B:");
	scanf("%f %f",&a,&b);
	c=a*10+b*6;
	d=a*8+b*10;
	printf("compete = %.4f\n",c);
	printf("standard = %.4f\n",d);
	if(c>d)
		printf("The Best Response is compete!\n");
	else
		printf("The Best Response is standard!\n");
	return 0;
}
