#include <stdio.h>

int main()
{
        int m,n,a,b,r;
        printf("请输入是数字a和b：") ;
        scanf("%d %d",&a,&b);
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
  
        return 0;
}
