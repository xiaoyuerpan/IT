#include <stdio.h>

int main()
{
	int arr[] = {10,20,50,70,80,90};
	int len = sizeof(arr) / sizeof(int);
	
	int i = 0;
	for(i = 0;i < len;i++)
	{
		printf("arr[%d] = %d,%p\n",i,arr[i],&arr[i]);
	}
	
	return 0;
}

