
#include <stdio.h>

int main()
{
	int i = 0;
	for(i = 1;i <= 100;i++)
	{
		int flag = 0;
		if(i % 2 == 0)
		{
			flag = 1;
		}
		else
		{
			flag = 0;
		}
		
		if(flag == 0)
		{
			printf("%d是偶数!\n",i);
		}
		else
		{
			printf("%d是奇数!\n",i);
		}
	}
	
	return 0;
}




