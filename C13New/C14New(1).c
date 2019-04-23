/*
长度为 N 
A B C D---------> D B C A -----------> C B D A ------------> B C D A 
	   首与N互换          首与N-1互换          首与n-2互换 

*/ 
#include<stdio.h>
void left_rotate(char a[100],int k,int len)
{
	int i,j;
	char t;
	for (i = 0;i<k;i++)    //第一层循环决定换几个数 
	{
		for(j = len;j>1;j--)   //第二层循环决定首与后面数不断轮换 
		{
			t = a[0];
			a[0] = a[j-1];
			a[j-1] = t;
		}
	}
}


void main()
{
	char a[100],b;
	int k,len,i = 0;
	printf("输入字符串：");
	while(1)
	{
		scanf("%c",&b);
		if(b == '\n') break;
		a[len] = b;
		len++;
	
	}
	printf("输入K值：");
	scanf("%d",&k);
	left_rotate(a,k,len);
	for(i = 0;i<len;i++) printf("%c",a[i]);
}

