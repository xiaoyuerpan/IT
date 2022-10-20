
#include <stdio.h>

int main()
{
	int a = 10;
	int *p = &a;
	
	printf("a = %d\n",a);//a空间的内容 
	printf("&a = %p\n",&a);//a空间的地址
	
	printf("p = %p\n",p);//指针p指向空间的地址 
	printf("*p = %d\n",*p);//指针p指向的空间内容 
	
	return 0;	
} 


