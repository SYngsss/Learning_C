#include<stdio.h>
int left_rotate(char a[100],char b[100],int len)
{
	int flag,i,j;
	char t;
	for (i = 0;i<len-1;i++)    //��һ��ѭ��������-1������ 
	{
		flag = 1;
		for(j = len;j>1;j--)   //�ڶ���ѭ��������������������ֻ� 
		{
			t = a[0];
			a[0] = a[j-1];
			a[j-1] = t;
		}
		for(i= 0;i<len;i++)    //һ����һ�����Ƚ��Ƿ�һ�� 
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
	printf("�����ַ���1��");
	while(1)
	{
		scanf("%c",&c);
		if(c == '\n') break;
		a[len1] = c;
		len1++;
	
	}
	printf("�����ַ���2��");
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

