/*
本题要求编写程序，打印一个高度为n的、由“*”组成的正菱形图案。
输入在一行中给出一个正的奇数n
输出由n行星号“*”组成的菱形，如样例所示。每个星号后跟一个空格。
	 7
 	  * 
    * * * 
  * * * * * 
* * * * * * * 
  * * * * * 
    * * * 
      * 

*/
#include<stdio.h>
void main(){

int nn,n,flag,flag1,flag2,flag3;
scanf("%d",&n);
flag = n/2;
for(;flag>-1;flag--)
{
	for(flag1 = flag;flag1>0;flag1--) printf("  ");
	for(flag2 = flag,nn = n;(nn-flag2*2)>0;nn--) printf("* ");
	if(flag != 0) 
		{
			for(flag3 = flag;flag3>1;flag3--) printf("  "); 
		}
	printf("\n");
}
for(flag = flag+2;flag<=n/2;flag++)
{
	for(flag1 = flag;flag1>0;flag1--) printf("  ");
	for(flag2 = flag,nn = n;(nn-flag2*2)>0;nn--) printf("* ");
	if(flag != 0) 
		{
			for(flag3 = flag;flag3>1;flag3--) printf("  "); 
		}
	printf("\n");
}
}
