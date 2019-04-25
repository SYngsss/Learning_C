/*
本题要求编写函数，将输入字符串的前3个字符移到最后。

函数接口定义：
void Shift( char s[] );
其中char s[]是用户传入的字符串，题目保证其长度不小于3；函数Shift须将按照要求变换后的字符串仍然存在s[]里。

输入样例：
abcdef
输出样例：
defabc
*/
#include<stdio.h>
void Shift(char s[],int k,int len)
{
	int i,j,t;
	for(i = 0;i<k;i++)
	{
		for(j = len;j-1>0;j--)
		{
			t = s[0];
			s[0] = s[j-1];
			s[j-1] = t;
		}
	}
}

void main()
{
	char s[100];
	int i,len = 0,k;
	printf("请输入字符串：");
	while(1)
	{
		scanf("%c",&s[len]);
		if(s[len] =='\n') break;
		len++;	
	}
	printf("输入交换字符数：");
	scanf("%d",&k);
	Shift(s,k,len); 
	for(i = 0;i<len;i++) printf("%c",s[i]);
}
