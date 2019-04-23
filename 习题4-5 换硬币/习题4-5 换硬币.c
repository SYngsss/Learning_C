 //将一笔零钱换成5分、2分和1分的硬币，要求每种硬币至少有一枚，有几种不同的换法？
 
 #include<stdio.h>
 void main()
 {
 	int a = 0, five_count = 1 ,two_count = 1, one_count = 1;
 	scanf("%d",&a);
 	for(;(5*five_count)<=a;five_count++)
 	{
 		two_count = 1, one_count = 1;
 		for(; (2*two_count)<=(a-5*five_count);two_count++)
 		{
 			one_count = a -5*five_count-2*two_count;
 			if(one_count==0) continue;
 			printf("five:%d\t two:%d\t one:%d\r\n",five_count,two_count,one_count);
		 }
	 }
 }
