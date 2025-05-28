#include<stdio.h>

int pyramid(char x);

int main()
{
	char a;
	printf("Please input a capital letter:");
	a=getchar();
	pyramid(a);
	return 0;
}
int pyramid(char x)
{
	int a,b,c,d;
	a=x-'A'+1;
	if(a==0)
	{
		printf("A\n");
		return 0;
	}
	for(b=1;b<=a;b++)
	{
		for(c=0;c<=a-b;c++)
			printf(" ");
		for(c=0;c<b-1;c++)
			printf("%c",'A'+c);
		for(c=0;c<b;c++)
			printf("%c",'A'+b-c-1);
		printf("\n");
	} 
}

