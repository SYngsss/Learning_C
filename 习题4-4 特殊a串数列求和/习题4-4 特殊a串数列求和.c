//给定两个均不超过9的正整数a和n，要求编写程序求a+aa+aaa++?+aa?a（n个a）之和。

#include<stdio.h>

void main()
{
	int a,b,sum=0,ret=0;
	scanf("%d %d",&a,&b);
	for(; b>0;b--)
	{
		ret = ret*10+a;
		sum += ret;
	}
	printf("%d",sum);
}

