#include<stdio.h>
int main()
{
	printf("�������쿡����ѧ�ţ�20225636\n");
	int a,b,c;
	for(a=0;a<=30;a++)
		for(b=0;b<=30-a;b++)
			for(c=0;c<=30-a-b;c++)
			{
				if(a*3+b*2+c==50&&a+b+c==30)
				{
					printf("���ˣ�%d,",a);
					printf("Ů�ˣ�%d,",b);
					printf("С����%d\n",c);
				}
			}
	return 0; 
}
