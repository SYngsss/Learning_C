 //��һ����Ǯ����5�֡�2�ֺ�1�ֵ�Ӳ�ң�Ҫ��ÿ��Ӳ��������һö���м��ֲ�ͬ�Ļ�����
 
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
