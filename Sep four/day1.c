#include<stdio.h>
//������-�������� -ֻ��һ��main���� 
//int�����͵���˼��mainǰ���int
// ��ʾmain�������÷���һ������ֵ 
/*
 %c,%d,%f-float,
 %lf-double,%p-��ַ,%s-�ַ���,%o-�˽��ƣ�%#o-����ǰ˽��ƣ�%x-ʮ������,
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
