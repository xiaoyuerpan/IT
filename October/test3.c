
#include <stdio.h>

int main()
{
	int num = 1234;
	//int *p = &num;
	//const int *p = &num; //const * p 
	int *const p = &num; //* const p
	
	printf("num = %d,&num = %p\n",num,&num);
	printf("*p = %d,p = %p\n",*p,p);
	
	//ͨ��ָ�����޸�ָ��ռ����� 
	
	*p = 9876;
	printf("++++num = %d,&num = %p\n",num,&num);
	printf("++++*p = %d,p = %p\n",*p,p);

/*
	//�޸�ָ���ָ�򣬵���*p��ֵ��p��ָ�����ı� 
	int b = 8888;
	p = &b;
	printf("++++b = %d,&b = %p\n",b,&b);
	printf("++++*p = %d,p = %p\n",*p,p);
*/	
	return 0;
}


