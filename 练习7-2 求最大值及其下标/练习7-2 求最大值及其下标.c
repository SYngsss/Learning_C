/*
����Ҫ���д�����ҳ�������n�����е����ֵ�����Ӧ����С�±꣨�±��0��ʼ����
*/
#include<stdio.h>
void main()
{
	int N,n,b[10]={0},nn=0;
	scanf("%d",&N);
	for(n = 0;n<N;n++) scanf("%d",&b[n]);
	for(;n>0;n--)
	{
		if(b[n]>b[nn]) nn = n; 	
	}
	printf("%d %d",b[nn],nn);
}
