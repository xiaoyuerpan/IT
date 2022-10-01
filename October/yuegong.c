#include<stdio.h>
int main()
{
  int m,n,t,r,p;
  scanf("%d %d",&m,&n);
  if(m<n)
  	{
	  t=n;n=m;m=t;
    }	
	r=m%n;
	p=m*n;//最小公倍数 
  while(r!=0)
  {
  	m=n;n=r;r=m%n;
  }
  printf("输出m，n的最大公约数%d\n",n);
  printf("输出m，n的最小公倍数数%d\n",p/n);
	return 0;
 } 
