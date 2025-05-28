#include<stdio.h>
#include<math.h>
int main()
{
	printf("ĞÕÃû£ºÖì¿¡¼ª£¬Ñ§ºÅ£º20225636\n");
	float a,b,c,x1,x2,det1,det2;
	printf("Please enter the coefficients a,b,c:");
	scanf("%f,%f,%f",&a,&b,&c);
	det1=b*b-4*a*c;
	if(det1<0)
		printf("error!\n");
	else
	{
		det2=sqrt(det1);
		printf("x1=%.4f,x2=%.4f\n",(-b+det2)/(2*a),(-b-det2)/(2*a));
	}
	return 0;
}
