 /*
 ����Ҫ���������������������Լ������С��������
 */
#include<stdio.h>
 void main()
 {
 	int a,b,t,aa,bb;
 	scanf("%d%d",&a,&b);
 	aa = a,bb = b;
 	while(b != 0)
 	{
 		t = a%b;
 		a = b;
 		b = t;
	}
	printf("���Լ��%d\n��С������%d\n",a,(aa/a)*(bb/a)*a);
 }
