/*
Ƥ���ĳ�����߶��������£����غ󷴵���ԭ�߶ȵ�һ�룬�����£��ٷ�������������˷�������Ƥ���ڵ�n�����ʱ���ڿ���һ���������پ��룿��n�η����ĸ߶��Ƕ��٣�

������һ���и��������Ǹ��������ֱ���Ƥ��ĳ�ʼ�߶Ⱥ�n�����ڳ����ͷ�Χ�ڡ�
*/
#include<stdio.h>
void main()
{
	float height,n,all_height = 0.0;
	scanf("%f%f",&height,&n);
	for(;n>0;n--)
	{
		all_height += height;
		height /= 2.0;
	}
//	all_height += height;
	printf("һ���߹�%0.1f\n�߶�Ϊ%0.1f",all_height,height);
}
