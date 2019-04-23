#include<stdio.h>
int left_rotate(char a[100],char b[100],int len)
{
	int flag,i,j;
	char t;
	for (i = 0;i<len-1;i++)    //第一层循环（长度-1）个数 
	{
		flag = 1;
		for(j = len;j>1;j--)   //第二层循环决定首与后面数不断轮换 
		{
			t = a[0];
			a[0] = a[j-1];
			a[j-1] = t;
		}
		for(i= 0;i<len;i++)    //一个数一个数比较是否一致 
		{
			if(a[i]!=b[i])
			{
				flag = 0;
			  break;
			}
		}
		if(flag==1) return 1; 
	}
	return 0;
}

int main()
{
	char a[100],b[100],c;
	int t,len1=0,len2=0,i = 0;
	printf("输入字符串1：");
	while(1)
	{
		scanf("%c",&c);
		if(c == '\n') break;
		a[len1] = c;
		len1++;
	
	}
	printf("输入字符串2：");
	while(1)
	{
		scanf("%c",&c);
		if(c == '\n') break;
		b[len2] = c;
		len2++;
	
	}
	if(len1==len2)
	{
		t = left_rotate(a,b,len1);
		printf("%d",t);
		return left_rotate(a,b,len1);
	}
	else 
	{
		//printf("0");
		return 0;
	}
}

