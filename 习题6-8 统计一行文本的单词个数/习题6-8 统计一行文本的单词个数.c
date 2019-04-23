/*
本题目要求编写程序统计一行字符中单词的个数。所谓“单词”是指连续不含空格的字符串，各单词之间用空格分隔，空格数可以是多个。
*/

#include<stdio.h>
int flag = 1;
void main()
{
	char a;
	while(1)
	{
		scanf("%c",&a);
		if(a=='\n') break;
		else if(a==' ')
		{
			while(1)
			{
				scanf("%c",&a);
				if(a!=' ') 
				{
					flag++;
					break;
				}
				else break;
			}
		}
		else{
			while(1)
			{
				scanf("%c",&a);
				if(a==' ')
				{
					flag++;
					break;
				}
				else break;
			}
		}
 }
	printf("%d",flag);
}
