
#include  <stdio.h>

int main()
{
	char str1[32] = "hello world";//�ַ������൱����ջ�����ٿռ䣬���ַ���������ֵ��ջ���ռ䣬��˶���ջ�������޸ĺ��� 
	
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
	char *p = "hello world";//�ַ�ָ���൱��ֱ�ӱ����ַ��������ĵ�ַ���ַ������ڳ��������ڣ����ʹ��ָ���޸ļ���ʾ��ͼ�޸ĳ��������ݣ����Դ��� 
	
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

