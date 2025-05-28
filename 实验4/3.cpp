#include<stdio.h>

int length(char x[]);

int main()
{
	printf("ĞÕÃû£ºÖì¿¡¼ª£»Ñ§ºÅ£º20225636\n");
	char c[1000];
	int a;
	printf("Please input a string: ");
	scanf("%s",&c);
	a=length(c);
	printf("The length of the string is %d",a);
	return 0;
}
int length(char x[])
{
	int a;
	while(x[a]!='\0')
	{
		a++;
	}
	return a;
}
