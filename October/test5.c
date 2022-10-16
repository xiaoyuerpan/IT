#include<stdio.h>

int main()
{
    int i = 0,j = 0,k = 0,n = 0;
    int flag1 = 0;
    for(n = 6;n <= 50;n = n + 2)
    {
	    for(i = 2;i < n;i++)
	    {
	    	flag1 = 0;
	    	for(j = 2;j < i;j++)
	    	{
	    		if(i % j == 0)
	    		{
	    			flag1 = 1;
				}
			}
			if(flag1 == 0)
			{
				int m = n - i;
				if((m == 1) || i > m)
				{
					continue;
				}
				
				int flag2 = 0;
				for(j = 2;j < m;j++)
				{
					if(m % j == 0)
					{
						flag2 = 1;
					}
				}
				
				if(flag2 == 0)
				{
					printf("%d = %d + %d\n",n,i,m);
				}
			}
		}	
	}
	
	return 0;
}
