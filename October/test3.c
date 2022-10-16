
#include <stdio.h>

int main()
{
/*	int i = 1;
	while(i <= 100)
	{
		printf("i = %d,hello world!\n",i);
		i = i + 1;
	}
*/
	int i = 1;
zxc:
	if(i > 100)
	{
		//goto qwe;
		return 0;
	}
	printf("i = %d,hello world!\n",i);
	i = i + 1;
goto zxc;

//qwe:

	return 0;
}


