#include<stdio.h>
#include<string.h>

struct yuangong
{
	char id[30];
	char name[30];
	int profic;
	int bonus;
	int income;
};

int main()
{
	struct yuangong x,y,z;
	int a,b[5];
	char c[30];
	b[0]=100000;b[1]=200000;b[2]=400000;b[3]=600000;b[4]=1000000;
	printf("Please input the employee_id:");
	gets(x.id);
	//scanf("%s",&x.id);
	printf("Please input the employee_name:");
	//scanf("%s",x.name);
	gets(x.name);
	printf("Please input the employee_profic:");
	scanf("\n");
	scanf("%d",&x.profic);
	if(x.profic<=b[0])
		x.bonus=x.profic*10/100;
	if(x.profic>b[0]&&x.profic<=b[1])
		x.bonus=b[0]*10/100+(x.profic-b[0])*75/1000;
	if(x.profic>b[1]&&x.profic<=b[2])
		x.bonus=b[0]*10/100+(b[1]-b[0])*75/1000+(x.profic-b[1])*5/100;
	if(x.profic>b[2]&&x.profic<=b[3])
		x.bonus=b[0]*10/100+(b[1]-b[0])*75/1000+(b[2]-b[1])*5/100+(x.profic-b[2])*3/100;
	if(x.profic>b[3]&&x.profic<=b[4])
		x.bonus=b[0]*10/100+(b[1]-b[0])*75/1000+(b[2]-b[1])*5/100+(b[3]-b[2])*3*100+(x.profic-b[3])*15/1000;
	if(x.profic>b[4])
		x.bonus=b[0]*10/100+(b[1]-b[0])*75/1000+(b[2]-b[1])*5/100+(b[3]-b[2])*3*100+(b[4]-b[3])*15/1000+(x.profic-b[4])/100;
	x.income=x.bonus+1000;
	printf("Id\t\tName\t\tBonus\t\tIncome\n");
	printf("%s\t\t%s\t\t%d\t\t%d\n",x.id,x.name,x.bonus,x.income);
	
	printf("Please input the employee_id:");
	//gets(x.id);
	scanf("%s",y.id);
	getchar();
	printf("Please input the employee_name:");
	//scanf("%s",y.name);
	gets(y.name);
	printf("Please input the employee_profic:");
	scanf("\n");
	scanf("%d",&y.profic);
	if(y.profic<=b[0])
		y.bonus=y.profic*10/100;
	if(y.profic>b[0]&&y.profic<=b[1])
		y.bonus=b[0]*10/100+(y.profic-b[0])*75/1000;
	if(y.profic>b[1]&&y.profic<=b[2])
		y.bonus=b[0]*10/100+(b[1]-b[0])*75/1000+(y.profic-b[1])*5/100;
	if(y.profic>b[2]&&y.profic<=b[3])
		y.bonus=b[0]*10/100+(b[1]-b[0])*75/1000+(b[2]-b[1])*5/100+(y.profic-b[2])*3/100;
	if(y.profic>b[3]&&y.profic<=b[4])
		y.bonus=b[0]*10/100+(b[1]-b[0])*75/1000+(b[2]-b[1])*5/100+(b[3]-b[2])*3*100+(y.profic-b[3])*15/1000;
	if(y.profic>b[4])
		y.bonus=b[0]*10/100+(b[1]-b[0])*75/1000+(b[2]-b[1])*5/100+(b[3]-b[2])*3*100+(b[4]-b[3])*15/1000+(y.profic-b[4])/100;
	y.income=y.bonus+1000;
	printf("Id\t\tName\t\tBonus\t\tIncome\n");
	printf("%s\t\t%s\t\t%d\t\t%d\n",y.id,y.name,y.bonus,y.income);
	
	getchar();
	printf("Please input the emplozee_id:");
	gets(z.id);
	printf("Please input the emplozee_name:");
	//scanf("%s",z.name);
	gets(z.name);
	printf("Please input the emplozee_profic:");
	scanf("\n");
	scanf("%d",&z.profic);
	if(z.profic<=b[0])
		z.bonus=z.profic*10/100;
	if(z.profic>b[0]&&z.profic<=b[1])
		z.bonus=b[0]*10/100+(z.profic-b[0])*75/1000;
	if(z.profic>b[1]&&z.profic<=b[2])
		z.bonus=b[0]*10/100+(b[1]-b[0])*75/1000+(z.profic-b[1])*5/100;
	if(z.profic>b[2]&&z.profic<=b[3])
		z.bonus=b[0]*10/100+(b[1]-b[0])*75/1000+(b[2]-b[1])*5/100+(z.profic-b[2])*3/100;
	if(z.profic>b[3]&&z.profic<=b[4])
		z.bonus=b[0]*10/100+(b[1]-b[0])*75/1000+(b[2]-b[1])*5/100+(b[3]-b[2])*3*100+(z.profic-b[3])*15/1000;
	if(z.profic>b[4])
		z.bonus=b[0]*10/100+(b[1]-b[0])*75/1000+(b[2]-b[1])*5/100+(b[3]-b[2])*3*100+(b[4]-b[3])*15/1000+(z.profic-b[4])/100;
	z.income=z.bonus+1000;
	printf("Id\t\tName\t\tBonus\t\tIncome\n");
	printf("%s\t\t%s\t\t%d\t\t%d\n",z.id,z.name,z.bonus,z.income);
	getchar();
	printf("我要查一下（人名）:");
	gets(c);
	if(strcmp(x.name,c)==0)
	{
		printf("Id\t\tName\t\tBonus\t\tIncome\n");
		printf("%s\t\t%s\t\t%d\t\t%d\n",x.id,x.name,x.bonus,x.income);
	}
	if(strcmp(y.name,c)==0)
	{
		printf("Id\t\tName\t\tBonus\t\tIncome\n");
		printf("%s\t\t%s\t\t%d\t\t%d\n",y.id,y.name,y.bonus,y.income);
	}
	if(strcmp(z.name,c)==0)
	{
		printf("Id\t\tName\t\tBonus\t\tIncome\n");
		printf("%s\t\t%s\t\t%d\t\t%d\n",z.id,z.name,z.bonus,z.income);
	}

	return 0;
}
