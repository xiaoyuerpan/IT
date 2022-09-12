#include<stdio.h>
int main()
{    
 int a,b,c;
 scanf("%d %d",&a,&b);
 c=(a+b)%7;
if(c==0)
{
	c=7;
}
	printf("%d",c);
   return 0;
}

 

