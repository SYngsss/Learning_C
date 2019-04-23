#include<stdio.h>
unsigned int reverse_bit(unsigned int value)
{
	int flag  = 32,a;
	unsigned int num = 1,All_num = 0;
	while(value)
	{
		if(value%2 != 0) //	printf("1");
		{
			value -= 1;
			for(num = 1,a = flag;a>1;a--) num = num*2;
			All_num = num + All_num;
			flag -= 1;
			value /= 2;
		}
		
		else 	//	printf("0");
		{			
			value /= 2;
			flag -= 1;
		}
	}
	return All_num;
}


void main()
{
	unsigned int value,All_num;
	scanf("%d",&value);
	All_num = reverse_bit(value);
	printf("%lld",All_num);
 } 
