#include<stdio.h>
#include<math.h>
int main()
{
    float i,n=1,n1,b=1,b1;
    do
    {
    	
     b=b*2*n*(2*n+2)/(2*n+1)/(2*n+1);
     n1=n+1;
     b1=b*2*n1*(2*n1+2)/(2*n1+1)/(2*n1+1);
     n=n+1; 
    }while(b-b1>0.1);
    printf("%f\n",b);
    
    n=1;b=1;
    do
    {
     b=b*2*n*(2*n+2)/(2*n+1)/(2*n+1);
     n1=n+1;
     b1=b*2*n1*(2*n1+2)/(2*n1+1)/(2*n1+1);
     n=n+1; 
    }while(b-b1>0.01);
    printf("%f\n",b);
    
    n=1;b=1;
     do
    {
     b=b*2*n*(2*n+2)/(2*n+1)/(2*n+1);
     n1=n+1;
     b1=b*2*n1*(2*n1+2)/(2*n1+1)/(2*n1+1);
     n=n+1; 
    }while(b-b1>0.001);
    printf("%f\n",b);
     
	  n=1;b=1;
	 do
    {
     b=b*2*n*(2*n+2)/(2*n+1)/(2*n+1);
     n1=n+1;
     b1=b*2*n1*(2*n1+2)/(2*n1+1)/(2*n1+1);
     n=n+1; 
    }while(b-b1>0.0001);
    printf("%f\n",b);
    
    	n=1;b=1;
	 do
    {
     b=b*2*n*(2*n+2)/(2*n+1)/(2*n+1);
     n1=n+1;
     b1=b*2*n1*(2*n1+2)/(2*n1+1)/(2*n1+1);
     n=n+1; 
    }while(b-b1>0.00001);
    printf("%f\n",b);
 return 0;
}
