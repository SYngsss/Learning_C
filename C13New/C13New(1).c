#include<stdio.h>
void code(int a[])
{
	int b[100],c[100];
	int i = 0,j = 0,k = 0;
	while(1)
	{
		if(a[i]=='\0') break;
		else if(a[i]%2==0) 
		{
			b[j] = a[i];
			j++;
		}
		
		else if(a[i]%2!=0)
		{
			c[k] = a[i];
			k++;
		}
		i++;
	}
	for(i =k,k = k-1;k>=0;k--) a[k] = c[k];
	for(j = j-1;j>=0;j--) a[i+j] = b[j];
}


void main()
{
	int a[100];
	int i= 0,j;
	while(1)
	{
		scanf("%d",&a[i]);
		i++;
		if(getchar()=='\n') break;
	}
	
	code(a);
	for( j= 0;j<i;j++){
	printf("%d ",a[j]);
}
}
 
