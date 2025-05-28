#include<stdio.h>
int main()
{
	printf("姓名：朱俊吉，学号：20225636\n");
	int a,b,c;
	for(a=0;a<=30;a++)
		for(b=0;b<=30-a;b++)
			for(c=0;c<=30-a-b;c++)
			{
				if(a*3+b*2+c==50&&a+b+c==30)
				{
					printf("男人：%d,",a);
					printf("女人：%d,",b);
					printf("小孩：%d\n",c);
				}
			}
	return 0; 
}
