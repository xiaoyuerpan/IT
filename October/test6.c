
#include <stdio.h>

int main()
{
	int num = 0x12345678;
	char *p = (char *)&num;//关注指针操作空间大小 
	printf("*p = %#x,%p\n",*p,p);
	p++;
	printf("*p = %#x,%p\n",*p,p);
	p++;
	printf("*p = %#x,%p\n",*p,p);
	p++;
	printf("*p = %#x,%p\n",*p,p);
	return 0;
}

