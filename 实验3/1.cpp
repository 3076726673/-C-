#include<stdio.h>
int transposition(int (*x)[10],int y);
int main()
{
	int a[10][10],n,i,j;
	printf("Input n:");
	scanf("%d",&n);
	printf("Input %d*%d matrix:\n",n,n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	transposition(a,n);
	return 0;
}
int transposition(int (*x)[10],int y)
{
	int i,j,k;
	for(i=0;i<y;i++)
	{
		for(j=0;j<i;j++)
		{
			k=x[i][j];
			x[i][j]=x[j][i];
			x[j][i]=k;
		}	
	}
	printf("The transposed matrix is:\n");
	for(i=0;i<y;i++)
	{
		for(j=0;j<y;j++)
			printf("%2d",x[i][j]);
		printf("\n");
	}
	return 0;
}
