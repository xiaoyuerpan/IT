
#include <stdio.h>

int main()
{
	char str = 't';
	char *p1 = &str;
	printf("str = %c,&str = %p\n",str,&str);
	printf("*p1 = %c,p1 = %p\n",*p1,p1);
	
	char *p2 = "hello world";//�ַ�ָ�뱣������ַ������׵�ַ 
	printf("*p2 = %c,p2 = %s,%p\n",*p2,p2,p2);//*p2��ʾ���ַ������ַ���p2�� %s ��ʽ���������ַ���ֱ��'\0'������p�� %p ��ʽ��������p2������ĵ�ַ 
	
	return 0;
}


