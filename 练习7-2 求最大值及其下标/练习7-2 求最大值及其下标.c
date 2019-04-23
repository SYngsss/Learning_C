/*
本题要求编写程序，找出给定的n个数中的最大值及其对应的最小下标（下标从0开始）。
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
