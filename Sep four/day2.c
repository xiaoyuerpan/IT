#include<stdio.h>
int main()
{
   //�ɻ�ͷ
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
  //�ɻ��� 
   for(int i=0;i<2;i++)
   {
   	for(int j=0;j<12;j++)
   	{
   		printf("*");
	   }
	printf("\n");
    }
  //�ɻ�β
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

