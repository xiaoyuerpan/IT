
#include  <stdio.h>

int main()
{
	char str1[32] = "hello world";//字符数组相当于在栈区开辟空间，将字符串常量赋值到栈区空间，因此对于栈区数据修改合理 
	
	str1[3] = '9';
	
	int i = 0;
	while(str1[i] != '\0')
	{
		printf("%c-",str1[i]);
		i++;
	}
	printf("\n");
	
	printf("str1 = %s\n",str1);
	
	printf("-------------------------------\n");
	char *p = "hello world";//字符指针相当于直接保存字符串常量的地址，字符串还在常量区存在，因此使用指针修改即表示试图修改常量区数据，所以错误 
	
	p[3] = '9';
	
	i = 0;
	while(p[i] != '\0')
	{
		printf("%c+",p[i]);
		i++;
	}
	printf("\n");
	
	printf("p = %s\n",p);
	
	
	return 0;
}

