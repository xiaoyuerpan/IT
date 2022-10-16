#include<stdio.h>
int main()
{
    int i = 0,j = 0,count = 0;
    for(i = 10;i <= 100;i++)
    {
    	for(j = 10;j <= 100;j++)
    	{
    		int a = i % 10 * 10 + i / 10;
    		int b = j % 10 * 10 + j / 10;
    		if((i * j == a * b) && (i < a))
	    	{
	    		printf("%d * %d == %d * %d\n",i,j,a,b);
	    		count++;
			}	
		}
	}
	
	printf("count = %d\n",count);
	
    return 0;
}
