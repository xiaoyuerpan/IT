
#include <stdio.h>

int main()
{
	int a = 10;
	int *p = &a;
	
	printf("a = %d\n",a);//a�ռ������ 
	printf("&a = %p\n",&a);//a�ռ�ĵ�ַ
	
	printf("p = %p\n",p);//ָ��pָ��ռ�ĵ�ַ 
	printf("*p = %d\n",*p);//ָ��pָ��Ŀռ����� 
	
	return 0;	
} 


