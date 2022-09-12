#include<stdio.h>
//主函数-程序的入口 -只有一个main函数 
//int是整型的意思，main前面的int
// 表示main函数调用返回一个整型值 
/*
 %c,%d,%f-float,
 %lf-double,%p-地址,%s-字符串,%o-八进制，%#o-带标记八进制，%x-十六进制,
*/ 

int main()
{
//   printf("%d\n",sizeof(char));//1
//   printf("%d\n",sizeof(short));//2
//   printf("%d\n",sizeof(int));//4
//   printf("%d\n",sizeof(long));//4
//   printf("%d\n",sizeof(long long));//8
//   printf("%d\n",sizeof(double));//8
    //printf("a+b=%d",a+b);
	extern int a;
	printf("a=%d\n",a);  
	return 0;
} 
