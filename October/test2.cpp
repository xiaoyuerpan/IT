
#include <stdio.h> 

int main()
{
	char str = 'r';
	int num = 1234;
	float tmp = 34.5678;
	printf("str = %c,&str = %p\n",str,&str);
	printf("num = %d,&num = %p\n",num,&num);
	printf("tmp = %f,&tmp = %p\n",tmp,&tmp);
/*	
	char *p1 = (char *)&num;
	int *p2 = (int *)&tmp;
	float *p3 = (float *)&str;
	
	printf("*p1 = %c\n",*p1);
	printf("*p2 = %d\n",*p2);
	printf("*p3 = %f\n",*p3);
*/
	void *p = NULL;
	p = &str;
	printf("*(char *)p = %c,p = %p\n",*(char *)p,p);
	
	p = &num;
	printf("*(int *)p = %d,p = %p\n",*(int *)p,p);
	
	p = &tmp;
	printf("*(float *)p = %f,p = %p\n",*(float *)p,p);
	
	return 0;
}

