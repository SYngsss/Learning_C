/*
给定两个整型数组，本题要求找出不是两者共有的元素。
10 3 -5 2 8 0 3 5 -15 9 100
11 6 4 8 2 6 -5 9 0 100 8 1

3 5 -15 6 4 1
*/

#include<stdio.h>
void main()
{
	int a[20],c[20],m = 0,n = 0,i,j,k=0,kk = 0,flag = 0;
	scanf("%d",&m);
	for(i = 0;i<m;i++) scanf("%d",&a[i]);
	scanf("%d",&n);
	for(j = 0;j<n;j++) scanf("%d",&a[j+i]);

	for(i = 0;i<m+n;i++)
	{
		flag = 1;
		for(j = 0;j<m+n-1;j++)
		{
			if(i==j) continue;
			if(a[i]==a[j]) 
			{
				flag = 0;
				break;
			}
		}
		if(flag ==1)
		{
			c[k] = a[i];
			k++;
		}
	}
	for(kk = 0;kk<k;kk++) printf("%d ",c[kk]);
}
