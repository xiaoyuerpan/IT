
#include <stdio.h>

int main()
{
	int a[10] = {10,20,30,40,50,60,70,80,90,100};
	//int *p = a;//int *p = NULL;  p = a;
	int *p1 = a + 6,*p2 = a + 3;
	printf("p1 = %p,p2 = %p,p1 - p2 = %d\n",p1,p2,p1 - p2);
	
	printf("*p2 = %d,*(p2 + 5) = %d\n",*p2,*(p2 + 5));

	return 0;	
} 



