
#include <stdio.h>

int main()
{
	//int arr[][4] = {10,40,50,70,90,120};
	int arr[][4] = {{10,40},{50,70,90},{120}};
	int i = 0,j = 0;
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 4;j++)
		{
			printf("arr[%d][%d] = %d,%p\n",i,j,arr[i][j],&arr[i][j]);
		}
		printf("---------------------\n");
	}
	
	return 0;
}


