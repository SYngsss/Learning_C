/*
����Ҫ���д�������������ַ�����ǰ3���ַ��Ƶ����

�����ӿڶ��壺
void Shift( char s[] );
����char s[]���û�������ַ�������Ŀ��֤�䳤�Ȳ�С��3������Shift�뽫����Ҫ��任����ַ�����Ȼ����s[]�

����������
abcdef
���������
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
	printf("�������ַ�����");
	while(1)
	{
		scanf("%c",&s[len]);
		if(s[len] =='\n') break;
		len++;	
	}
	printf("���뽻���ַ�����");
	scanf("%d",&k);
	Shift(s,k,len); 
	for(i = 0;i<len;i++) printf("%c",s[i]);
}
