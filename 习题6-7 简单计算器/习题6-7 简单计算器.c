 /*
 ģ����������Ĺ��������������ֻ�ܽ��мӼ��˳����㣬�������ͽ��������������������������ȼ���ͬ���������ҵ�˳����㡣
 ������һ���и���һ������������ʽ��û�пո���������һ�������������Ⱥš�=��˵�����������
 ��һ���������ʽ�����������������������ĸΪ0���зǷ�������������������Ϣ��ERROR��
 */ 
#include<stdio.h>
void main()
{
	int flag = 1,d = 1;
	double a,sum;
	char m,mm;
	while(flag)
	{
		scanf("%lf%c",&a,&m);
		if(flag==1)
		{
			sum = a;
			mm = m;
			flag++;
			continue;
		}

		switch (mm)
	{
		case '+': sum+=a;mm =m;break;
		case '-': sum-=a;mm = m;break;
		case '*': sum*=a;mm =m;break;
		case '/': sum/=a;mm = m;break;
		case '=': flag = 0;break;
		default: printf("Error\n");d= 0;flag = 0;break;
	}
	if (m=='=') break;
	}
	if(d!=0) printf("%f",sum);
}

