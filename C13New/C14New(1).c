/*
����Ϊ N 
A B C D---------> D B C A -----------> C B D A ------------> B C D A 
	   ����N����          ����N-1����          ����n-2���� 

*/ 
#include<stdio.h>
void left_rotate(char a[100],int k,int len)
{
	int i,j;
	char t;
	for (i = 0;i<k;i++)    //��һ��ѭ�������������� 
	{
		for(j = len;j>1;j--)   //�ڶ���ѭ��������������������ֻ� 
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
	printf("�����ַ�����");
	while(1)
	{
		scanf("%c",&b);
		if(b == '\n') break;
		a[len] = b;
		len++;
	
	}
	printf("����Kֵ��");
	scanf("%d",&k);
	left_rotate(a,k,len);
	for(i = 0;i<len;i++) printf("%c",a[i]);
}

