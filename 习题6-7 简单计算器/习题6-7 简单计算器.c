 /*
 模拟简单运算器的工作。假设计算器只能进行加减乘除运算，运算数和结果都是整数，四种运算符的优先级相同，按从左到右的顺序计算。
 输入在一行中给出一个四则运算算式，没有空格，且至少有一个操作数。遇等号”=”说明输入结束。
 在一行中输出算式的运算结果，或者如果除法分母为0或有非法运算符，则输出错误信息“ERROR”
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

