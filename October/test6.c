
#include <stdio.h>

int main()
{
	int num = 0x12345678;
	char *p = (char *)&num;//��עָ������ռ��С 
	printf("*p = %#x,%p\n",*p,p);
	p++;
	printf("*p = %#x,%p\n",*p,p);
	p++;
	printf("*p = %#x,%p\n",*p,p);
	p++;
	printf("*p = %#x,%p\n",*p,p);
	return 0;
}

