//本题要求编写程序,计算序列 1 - 1/4 + 1/7 - 1/10 + ... 的前N项之和。
#include<stdio.h>
void main()
{
	int a,b=-2;
	float sum=0;
	scanf("%d",&a);
	while(a)
	{
		b = b + 3;
		if(a%2==0)
		{
			sum = sum + 1.0/b;
		}
		else
		{
			sum = sum - 1.0/b;
		}
		a--;
	}
	printf("%f",sum);
}
