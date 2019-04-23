#include<stdio.h>
void main ()
{
	int A,a,aa,N=0,NN=1,Na=0,na=0,b=0,num=0,c =1;
	scanf("%d",&N);
	A = N;
	for(;A>0;A--) NN*=10;
	Na = NN-1;
	for(;Na>=(NN/10);Na--)
	{
		na= Na;
		for(a = N;a>0;a--)
		{
			b = na%10;
			na =na/10;
			for(aa = N;aa>0;aa--)	c =c*b;
			num = c + num;
			c = 1;
		}
		if(num == Na)	printf("%d\n",num);
		num = 0;
	
	}
}

