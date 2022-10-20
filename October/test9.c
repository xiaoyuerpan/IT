
#include <stdio.h>

int main()
{
	//int num = 23;//&num
	//printf("num = %d,*(&num) = %d\n",num,*(&num));
	
	int a[10] = {10,20,30,40,50,60,70,80,90,100};
	int i = 0;
	for(i = 0;i < 10;i++)
	{
		//printf("a[%d] = %d,%p\n",i,a[i],&a[i]);
		printf("*(a + %d) = %d,%p\n",i,*(a + i),a + i);//a[i] == *(a + i)	==>> [] == *( + )
	} 
	
	return 0;	
} 



