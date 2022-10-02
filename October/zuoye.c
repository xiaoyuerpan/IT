#include<stdio.h>
int main()
{
	double score[9];
	int max,min;
	int i;
	double sum=0;
	double ave;
	for(i=1;i<=10;i++)
	{
		printf("请输入第%d次成绩：\n",i); 
		scanf("%lf",&score[i-1]);
	}
	max=min=score[0];
	for(i=0;i<10;i++)
	{
			if(max<score[i])
		    max=score[i];
		   if(min>score[i])
			min=score[i];
		sum+=score[i];
    }
	ave=(sum-max-min)/8; 
	printf("去掉最大最小值的平均值是%f",ave);
	return 0;
 } 
