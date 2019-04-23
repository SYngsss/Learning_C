//C=5¡Á(F?32)/9¡£
#include<stdio.h>
void main()
{
	int b;
	float a;
	scanf("%f",&a);
	b = (int)a;
	if (b-a!=0)
	{
		a = 5.0*(a+32.0)/9.0;
		printf("%f",a);
	}
	else
	{
		a = 5*(a+32)/9;
		printf("%d",(int)a);
	}	
	
}
