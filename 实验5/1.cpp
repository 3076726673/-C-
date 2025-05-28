#include<stdio.h>

int main()
{
	printf("ÐÕÃû£ºÖì¿¡¼ª£»Ñ§ºÅ£º20225636\n");
	int a,f,m;
	double h;
	char b[100];
	printf("*************************************\n");
	printf("* Welcome to Use Height Prediction System *\n");
	printf("*************************************\n");
	printf("Please choose the sex:\n");
	printf("1.Femal\n");
	printf("2.Male\n");
	printf("Your choice is: ");
	scanf("%d",&a);
	printf("May I know your Surname? ");
	scanf("%s",b);
	printf("Hi, %s\n",b);
	printf("Could you please input your mother's height(cm): ");
	scanf("%d",&m);
	printf("Could you please input your father's height(cm): ");
	scanf("%d",&f);
	if(a==1)
		h=(f*0.923+m)*0.5;
	if(a==2)
		h=(f+m)*0.54;
	printf("Your predicted height is %.0f cm\n",h);
	printf("Thank you for use our \"Height Prediction System\"!\n");
	return 0;
}
