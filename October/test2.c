#include <stdio.h>

int main()
{
        int m,n,a,b,r,sum = 0;
        printf("请输入是数字a和b：") ;
        scanf("%d %d",&a,&b);
    goto asf;
        if(a>b)
        {
            m=a;
            n=b;
        }
        else
        {
            m=b;
            n=a;
        }
        
        r = m % n;
         while(!(r==0))
         {
            m=n;
            n=r;
			r=m%n;
         }
         printf("n= %d\n",n);
  	asf:
		sum = a + b;
  		printf("sum = %d\n",sum);
  
        return 0;
}
