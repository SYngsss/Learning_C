/*
����ĿҪ���д����ͳ��һ���ַ��е��ʵĸ�������ν�����ʡ���ָ���������ո���ַ�����������֮���ÿո�ָ����ո��������Ƕ����
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
