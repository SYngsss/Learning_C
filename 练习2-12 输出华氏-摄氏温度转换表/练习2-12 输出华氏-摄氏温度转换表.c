
//C=5¡Á(F-32)/9
#include<stdio.h>
void main ()
{
	float min,max,a;
	scanf("%f%f",&min,&max);
	if(min<0||max>100||min>=max) printf("404");
	else
	{
		for(min;min<=max;min=min+2)
		{
			a =5*(min-32)/9;
			printf("%f\n",a);
		}
	}
}


