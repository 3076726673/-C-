#include<stdio.h>
int main()
{
	int a[10],b;
	float average,total=0;
	for(b=0;b<10;b++)
		scanf("%d",&a[b]);
	for(b=0;b<5;b++)
		total=total+a[b]*0.3;
	for(b=5;b<10;b++)
		total=total+a[b]*0.7;
	average=total/5.0;
	printf("total=%.2f,average=%.2f,average=%.0f",total,average,average);
	return 0;
}
