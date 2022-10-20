
#include <stdio.h>

int main()
{
	char str = 't';
	char *p1 = &str;
	printf("str = %c,&str = %p\n",str,&str);
	printf("*p1 = %c,p1 = %p\n",*p1,p1);
	
	char *p2 = "hello world";//字符指针保存的是字符串的首地址 
	printf("*p2 = %c,p2 = %s,%p\n",*p2,p2,p2);//*p2显示的字符串首字符，p2以 %s 形式输出，输出字符串直到'\0'结束，p以 %p 形式输出，输出p2所保存的地址 
	
	return 0;
}


