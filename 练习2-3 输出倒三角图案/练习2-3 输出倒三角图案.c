#include<stdio.h>
void main ()
{
	int a=4,b,c;
  for( a ; a>0 ;a--)
  {
  	c = 5-a;
    for( c ; c>0 ;c--)
    printf(" ");
    b = a;
    for(b;b>0;b--)
    printf("* ");
    printf("\n");
  }
}
