/*
����Ҫ���д���򣬴�ӡһ���߶�Ϊn�ġ��ɡ�*����ɵ�������ͼ����
������һ���и���һ����������n
�����n���Ǻš�*����ɵ����Σ���������ʾ��ÿ���Ǻź��һ���ո�
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
