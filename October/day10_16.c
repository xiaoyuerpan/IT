#include<stdio.h>
#include<math.h>
int main()
{
    float i,n,n1,b=1,b1=1;
    for(n=1;;n++)
    {
     b=b*2*n*(2*n+2)/(2*n+1)/(2*n+1);
  n1=n+1;
  b1=b*2*n1*(2*n1+2)/(2*n1+1)/(2*n1+1);
  if(b-b1<0.1)
  {
   printf("%f\n",b);
   break;
  }
  }
	b=1;
 for(n=1;;n++)
    {	
     b=b*2*n*(2*n+2)/(2*n+1)/(2*n+1);
  n1=n+1;
  b1=b*2*n1*(2*n1+2)/(2*n1+1)/(2*n1+1);
  if(b-b1<0.01)
  {
   printf("%f\n",b);
   break;
  } 
 }
  b=1;
 for(n=1;;n++)
    {
     b=b*2*n*(2*n+2)/(2*n+1)/(2*n+1);
  n1=n+1;
  b1=b*2*n1*(2*n1+2)/(2*n1+1)/(2*n1+1);
  if(b-b1<0.001)
  {
   printf("%f\n",b);
   break;
  } 
 }   
 b=1;
 for(n=1;;n++)
    {
     b=b*2*n*(2*n+2)/(2*n+1)/(2*n+1);
  n1=n+1;
  b1=b*2*n1*(2*n1+2)/(2*n1+1)/(2*n1+1);
  if(b-b1<0.0001)
  {
   printf("%f\n",b);
   break;
  } 
 }
    
    b=1;
 for(n=1;;n++)
    {
     b=b*2*n*(2*n+2)/(2*n+1)/(2*n+1);
  n1=n+1;
 b1=b*2*n1*(2*n1+2)/(2*n1+1)/(2*n1+1);
  if(b-b1<0.00001)
  {
   printf("%f\n",b);
   break;
  }
 }
 return 0;
}