#include<stdio.h>

void swap(int *px,int *py);
int main()
{
	int a[3],b;
	printf("Please input three integers:");
	scanf("%d,%d,%d",&a[0],&a[1],&a[2]);
	if(a[0]>a[1])
		swap(&a[0],&a[1]);
	if(a[0]>a[2])
		swap(&a[0],&a[2]);
	if(a[1]>a[2])
		swap(&a[1],&a[2]);
	printf("%d,%d,%d\n",a[0],a[1],a[2]);
	return 0;
}
void swap(int *px,int *py)
{
	int a;
	a=*px;
	*px=*py;
	*py=a;
}
