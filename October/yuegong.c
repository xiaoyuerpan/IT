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
	p=m*n;//��С������ 
  while(r!=0)
  {
  	m=n;n=r;r=m%n;
  }
  printf("���m��n�����Լ��%d\n",n);
  printf("���m��n����С��������%d\n",p/n);
	return 0;
 } 
