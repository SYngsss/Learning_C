 /*
 本题要求两个给定正整数的最大公约数和最小公倍数。
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
	printf("最大公约数%d\n最小公倍数%d\n",a,(aa/a)*(bb/a)*a);
 }
