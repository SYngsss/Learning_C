//����������������9��������a��n��Ҫ���д������a+aa+aaa++?+aa?a��n��a��֮�͡�

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

