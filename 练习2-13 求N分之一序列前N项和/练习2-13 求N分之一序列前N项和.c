#include<stdio.h>

void main()
{
	int N;
	float sum;
	scanf("%d",&N);
	for(N;N>0;N--)
	{
		sum = sum+ 1.0/N;
	}
	printf("%f",sum);
}
