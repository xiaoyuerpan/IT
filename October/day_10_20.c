//#include<stdio.h>
//int main()
//{
// char a[100];
// char b[100];
// printf("��Ҫ��ȡ���ַ�����");
// scanf("%s",a);
// int n,i = 0;
// printf("��Ҫ��ȡ���ַ�����ǰn�");
// scanf("%d",&n);
// for (i = 0; i < n; i++)
// {
//  b[i] = a[i];
// }
// b[n] = '\0';
// printf("%s", b);
//}
//strlen���� 
//#include<stdio.h>
//int main()
//{
//	char a[100]={"1550oihag"};//9
//	int i;
//	 for(i=0;a[i]!='\0';i++) ;
//	printf("%d\n",i);
//	return 0;
//}
//strcpy
//#include<stdio.h>
//int main()
//{
//	char a[100]="asfsgh",b[2];
//	int i;
//	while(a[i]!=0)
//	{
//		b[i]=a[i];
//		i++;
//	}
//	b[i]="\0";
//   printf("%s\n",b);
//	return 0;
//}

//strcmp���� 
//#include<stdio.h>
//int main()
//{
//	char a[100]="daas";
//    char  b[100]="daas";
//	int i=0,s;
//   while(1)
//   {
//   	if(a[i]!=b[i]) 
//   	 {
//   	 	if(a[i]>b[i])
//   	 {
//   	 	s=1;
//	}
//	if(a[i]<b[i])
//   	 {
//   	 	s=-1;
//	}	
//	break;
//	}
//else if(a[i]=='\0' &&b[i]=='\0')
//   	{
//   		s=0;
//   		break;	
//	}
//	i++;
//}  	
//printf("%d\n",s);
//	return 0;
//}
//strcat���� 
//#include<stdio.h>
//int main()
//{
//	char a[40]="dafsghj",b[40]="werrtyuiop";
//	int i=0,j=0;
//	while(a[i]!='\0')
//	{
//	    i++;	
//	} 
//	while(b[j]!='\0')
//	{
//		a[i]=b[j];
//		j++;
//		i++;	
//	}
//	a[i]='\0';
//	printf("%s",a);
//	return 0;
//}

//���ֲ��� 3�� 
//#include<stdio.h>
//#define  N   8
//int main()
//{
//  int i,j;
//int a[N]={16,22,33,44,56,67,78,89},num=89;
//int left=0,right=N-1;
//while(left<=right)
//{
//int mid=(left+right)/2;
//if(a[mid]<num)
//{
//  left=mid+1;
//}
//else if(a[mid]>num)
//{
//right=mid-1;
//}
//else if(a[mid]==num)
//{
//printf("�ɹ�\n");
//return 0;
//}
//}
//printf("ʧ��\n");
//return 0;
//}
//ָ�� 
//#include <stdio.h>
//int main(int argc, char *argv[])
//{
//	int a;
//	printf("��������a:");
//	scanf("%d",&a);
//	
//	printf("a = %d\n",a);
//	printf("&a = %p\n",&a);
//	
//	printf("-----------------------\n");
//	int * p = &a;
//	
//	printf("*p = %d\n",*p);
//	printf("p = %p\n",p); 
//	printf("-----------------------\n");
//	//printf("%d\n",*(&a));//*(&a)==����
//	//printf("%p\n",&(*p));//*(&a)==���� 
//	//printf("p = %p\n",p);
//	
//	int b = 300;
//	
//	//p = &b; //ͨ��ָ�����������ָ��ռ�
// 	*p = 2345; //ͨ�� *<ָ�������> ����ָ��ռ����ݣ��п��ܻ��޸�ָ��ռ����� 
// 	
// 	printf("+++++*p = %d\n",*p);
//	printf("+++++p = %p\n",p); 
// 	printf("+++++a = %d\n",a);
//	printf("+++++&a = %p\n",&a);
//	
//	return 0;
//}
//#include <stdio.h>
//int main(int argc, char *argv[])
//{
//	  int a=10;
//	//const int *p = &a;//ָ�볣��
//	int *const p=&a;//int * const p;������ָ�룩
//	printf("+++++a = %d,&a=%p\n",a,&a);
//	printf("+++++*p= %d,p=%p\n",*p,p);
////	(*p)++;//ֵ�ı䣬��ַ���� 
//	//++a;//��ַ��1��ֵ��4 
//	//a=7888;// ֵ�ı䣬��ַ����
//	*p=22;
//	printf("+++++a = %d,&a=%p\n",a,&a);
//	printf("+++++*p= %d,p=%p\n",*p,p);
//
////	printf("+++++p = %p\n",p);
////	printf("+++++&a = %p\n",&a);
////	printf("+++++a = %d\n",a);
//	return 0;
//}
//#include <stdio.h>
//int main(int argc, char *argv[])
//{
//printf("%d\n",sizeof(int *));
//printf("%d\n",sizeof(float *));
//printf("%d\n",sizeof(double *));
//printf("%d\n",sizeof(char *));	
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char str='r';  
//	char * p1 = &str;
//	printf("str=%c\n",str);
//	printf("*p1=%c\n",*p1);
//	printf("&str=%p\n",&str);
//	printf("p1=%p\n",p1);
//	printf("-----------------------\n");
//	float temp=34.5678;
//	float * p2 = &temp;
//	printf("temp=%f\n",temp);
//	printf("*p2=%f\n",*p2);
//	printf("&temp=%p\n",&temp);
//	printf("p2=%p\n",p2);
//	printf("-----------------------\n");
//	int a=34;
//	int * p3 = &a;
//	printf("a=%d\n",a);
//	printf("*p3=%d\n",*p3);
//	printf("&a=%p\n",&a);
//	printf("p3=%p\n",p3);	
//	return 0;
//}



//10.20��ҵ 
//1���� N����������Ҫ����ĸ�Ⱥ�˳�����У����������򷨣�������� 
//#include<stdio.h>
//#include <string.h>
//#define N  5
//int main()
//{
//	char a[N][100]={"endland","china","australia","canada","germany"};
//	int i,j;
//	//ð������ 
//	for(i=0;i<N-1;i++) 
//	{
//	for(j=0;j<N-1-i;j++)	
//	{
//	  if(strcmp(a[j],a[j+1])>0)	//���� 
//	  {
//	  	  char b[100];
//	  	 strcpy(b,a[j]);
//	  	 strcpy(a[j],a[j+1]);
//	  	 strcpy(a[j+1],b);	 
//	  }	
//	}	
//	}
//	for(i=0;i<N;i++)
//	{
//		printf("%s\n",a[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int  main()
//{
//	char a[7][10]={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
//   	int i,j;
//   	char t[32];
//   	for(i=0;i<7;i++)//ð������ 
//   	{
//   		for(j=0;j<6-i;j++)//6-i
//   		{
//   		//���� 
//   			if(strcmp(a[j],a[j+1])>0)
//   		{  
//   			strcpy(t,a[j]);
//   			strcpy(a[j],a[j+1]);
//   			strcpy(a[j+1],t);
//		}
//		}
//	}  
//   	for(i=0;i<7;i++)
//	 {
//	 printf("%s\n",a[i]);
//	 }  	
//   	return 0;
//}

//2����һ���ַ����Ĵ�д��ĸ�ŵ��ַ����ĺ��棬�Ҳ����������Ŀռ�
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[100]="adfsfAEGkcgjhBY";
//	char b[100],c[100];
//	int i=0,j=0,k=0;
//	while(a[i]!='\0')
//  {
//	if(a[i]>='A'&& a[i]<='Z')
//	{ 
//	b[j]=a[i];
//	j++;
//    }  
//    if(a[i]>='a'&& a[i]<='z')
//	{
//	c[k]=a[i];
//	k++;
//    } 
//	i++; 
//  }
//  b[j]='\0';c[k]='\0';
//  strcat(c,b);
// printf("%s\n",c);			
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[100]="saerAREzsgtRfsg",t; 
//	int i,j;
//	int len=strlen(a);
//	for(i=0;i<len;i++)//��ȷ����һλ���ڶ�λ������λ 
//	{
//	 for(j=len-2;j>=i;j--)//j����ȡ  j=�����ڶ��� 
//	{
//		if(a[j]>='A'&&a[j]<='Z' &&a[j+1]>='a'&&a[j+1]<='z')
//		{
//			t=a[j];a[j]=a[j+1];a[j+1]=t;//����Ab-> ���� 
//		}	
//	}	
//	}
//	printf("%s\n",a) ;
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[100]="saerAREzsgtRfsg",t; 
//	int i,j;
//	int len=strlen(a);
//	for(i=0;i<len;i++)//��ȷ�����һλ
//	{
//	 for(j=0;j<len-1-i;j++)//okk 
//	{
//		if(a[j]>='A'&&a[j]<='Z' &&a[j+1]>='a'&&a[j+1]<='z')
//		{
//			t=a[j];a[j]=a[j+1];a[j+1]=t;//����Ab-> ���� 
//		}	
//	}		
//	}
//	printf("%s\n",a) ;
//	return 0;
//}











