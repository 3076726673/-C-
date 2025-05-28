#include<stdio.h>
void statistics(char x[]);
int main()
{
	char a[10000];
	statistics(a);
	return 0;
}
void statistics(char x[])
{
	int a,b,c,d;
	printf("Please input a string end by #:\n");
	for(a=0;a<10000;a++)
	{
		x[a]=getchar();
		if(x[a]=='#')
			break;
		if(x[a]==' ')
			b++;
		if(x[a]=='\n')
			c++;
		if(x[a]!='\n'&&x[a]!=' ')
			d++;
	}
	printf("space: %d,newline: %d,others: %d",b,c,d);
}
