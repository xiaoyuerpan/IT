#include<stdio.h>
int main()
{
   //飞机头
   for(int i=0;i<2;i++)
   {
   	for(int j=0;j<5;j++)
   	{
   	 printf(" ");	
    }
    for(int k=0;k<2;k++)
       {
	   printf("*");
	   }
	printf("\n"); 	  
	} 
  //飞机身 
   for(int i=0;i<2;i++)
   {
   	for(int j=0;j<12;j++)
   	{
   		printf("*");
	   }
	printf("\n");
    }
  //飞机尾
  for(int i=0;i<2;i++)
  {
  	for(int j=0;j<4;j++)
  	{
  		printf(" ");
	  }
  	for(int k=0;k<2;k++)
  	{
  		printf("*  ");
	  }
	  printf("\n");
   } 
    return 0;
}

