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
		printf("�������%d�γɼ���\n",i); 
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
	printf("ȥ�������Сֵ��ƽ��ֵ��%f",ave);
	return 0;
 } 
