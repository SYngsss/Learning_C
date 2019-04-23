/*
皮球从某给定高度自由落下，触地后反弹到原高度的一半，再落下，再反弹，……，如此反复。问皮球在第n次落地时，在空中一共经过多少距离？第n次反弹的高度是多少？

输入在一行中给出两个非负整数，分别是皮球的初始高度和n，均在长整型范围内。
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
	printf("一共走过%0.1f\n高度为%0.1f",all_height,height);
}
