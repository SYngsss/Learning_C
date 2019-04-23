/*
先判断中间的那个数，比它大为右下部分，比它小为左上部分
n*n (n为奇数） 
中间数 = a[n/2][n/2]
程序中n=3 
*/
#define N 3
#include<stdio.h>
void main()
{
	int a[][N]={{1,2,3},{2,3,4},{3,4,5}};
	int n,i,flag = 0;
	scanf("%d",&n);
	if(n<=a[1][1])
	{
		for(i=0;i<3;i++)
		{
			if(n==a[0][i]) 
			{
			flag = 1;
			break;
			}
		}
		if(n==a[1][0]) flag = 1;
	}
	
	if(n>=a[1][1])
	{
		for(i = 0;i<3;i++)
		{
			if(n==a[2][i]) 
			{
			flag = 1;
			break;
			}
		}
		if(n==a[1][2]) flag = 1;
	}
	
	if(n==a[1][1]) flag = 1;
	
	if(flag ==1) printf("存在 值为%d",n);
	else if(flag ==0) printf("不存在");
}
