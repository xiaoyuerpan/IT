//���100�����ܱ�3�����Ҹ�λ��Ϊ6����������

//#include<stdio.h>
//int main()
//{
//	int i;
//	for(i=1;i<=100;i++)
//	{
//		if(i%3==0 && i%10==6)
//		{
//			printf("%d\n",i);
//		}
//	}	
//	return 0;
//}
//����1 �������� n, ���㲢��� s ��ǰn��ĺ͡�
// S = 1 -1/2 + 1/3 - 1/4 + 1/5 -1/6 + ����

//#include<stdio.h>
//int main()
//{
//	int n,i,t=1;
//	scanf("%d",&n);
//	float sum=0,a;
//	for(i=1;i<=n;i++)
//	{
//	  a=t*(1.0/i);
//	  sum=sum+a;
//	  t=-t;	
//	}
//	printf("%f\n",sum);
//	return 0;
//}
//дһ���������û�����һ���������ж�������Ƿ���������������ֻ�ܱ�1�ͱ���������������
//#include<stdio.h>
//int main()
//{ 
//   int n,i;
//   scanf("%d",&n);
//    if(n>2)
//   {
//   	for(i=2;i<n;i++)
//	 {
//	   	if(n%i==0)
//	   	{
//	  	printf("��������\n"); 
//		break;	
//		}
//	   else  
//	   {
//	   	printf("������\n"); 
//		break;	
//	   }
//   }
//   }
//else  if(n==2)
//   {
//   	printf("������\n"); 
//   }
//    else 
//	{
//   	printf("��������\n"); 
//   }	 
//	return 0;
//}
//һ��������������100����һ����ȫƽ������
//������368����һ����ȫƽ���������ʸ����Ƕ��٣� (��ȫƽ��������һ������ƽ������ƽ�����ڸ���) 
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i=0,x,y;
//	while(i>=0)
//	{
//	x=sqrt(i+100);
//	y=sqrt(i+368);
//	if(x*x==i+100 && y*y==i+368)	
//	{
//		printf("%d\n",i);
//	}
//	i++;
//	}
//	return 0;
//}
//�����и�λ��ʮλ����λ���������һ�����������ߵ���λ������ע����������������֮�ʹ��ڵ����ߣ�
//#include<stdio.h>
//int main()
//{
//	int i;
//	int a,b,c;
//	for(i=100;i<=999;i++)
//	{
//	  a=i/100;b=i/10%10;c=i%10;
//	  if(a+b>c && a+c>b && b+c>a)
//	  {
//	  	printf("%d\n",i);
//		  }	
//	}
//	return 0;
//}
//��ϰ1����֤���������洢
//��ϰ2����֤���ֳ�ʼ���У���ЩԪ�ر���ʼ����δ��ʼ����Ԫ��ֵΪ���٣�
//��ϰ3����֤��δӼ����������ݵ�������
//#include<stdio.h>
//int main()
//{
//��֤1	
//  int arr[4],i;
//  for(i=0;i<4;i++)
//  {
//  	scanf("%d",&arr[i]);	  	
//  }	
//   for(i=0;i<4;i++)
//  {
//   printf("%p\n",&arr[i]);	  	
//  }
 	
//��֤2	
//  int arr[4]={1,2},i;
//   for(i=0;i<4;i++)
//  {
//   printf("arr=%d\n",arr[i]);	  	
//  }
 	

//��֤3	
//  int arr[4],i;
//  for(i=0;i<4;i++)
//  {
//  	scanf("%d",&arr[i]);
//	  	
//  }
//   for(i=0;i<4;i++)
//  {
//   printf("arr[%d]=%d\n",i,arr[i]);	  	
//  }
// 

//	return 0;
//}

//������10������Ԫ�ص����鵹�������������������ռ�
//#include<stdio.h>
//int main()
//{	
//  int arr[10]={1,2,3,4,5,6,7,8,9,10},i,x;
//   for(i=0;i<10;i++)
//  {
//  	if(i<5)
//  	{
//  	 x=arr[i];
//   	 arr[i]=arr[9-i] ;
//   	 arr[9-i]=x;
//	printf("arr[%d]=%d\n",i,arr[i]);  	
//	 }
//	else if(i<10)
//  	{
//	printf("arr[%d]=%d\n",i,arr[i]);  	
//	 } 			
//  }
//	return 0;
//}
//���������С 
//#include<stdio.h>
//#define VAL(a)    sizeof(a)/sizeof(arr[0]) 
//int main()
//{
//   int arr[10]={0};
//   printf("count=%d\n",VAL(arr));
//	return 0;
//}

//��ϰ1����֤��ά����洢��ʽ
//��ϰ2����֤���ֳ�ʼ���е���ͨ��ʼ���Ͱ��г�ʼ���Ĳ�ͬ
//#include<stdio.h>
//int main()
//{
//	int i,j;
//	int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<4;j++)
//		printf("brr[%d][%d]=%p %d\n",i,j,&arr[i][j],arr[i][j]);		
//	}
//    printf("-----------------------\n");	
//	int brr[3][4]={1,2,3,4,5};
//	int crr[3][4]={{1,2},{3,4}};
//		for(i=0;i<3;i++)
//	{
//		for(j=0;j<4;j++)
//		printf("brr[%d][%d]=%d\n",i,j,brr[i][j]);
//		//printf("crr[%d][%d]=%d\n",i,j,crr[i][j]);
//	}	
//	return 0;	
//}
//1,���ն�����10�����������ֵ���ڵ�һ��������Сֵ�������һ����������������(����ʹ������)
//#include<stdio.h>
//int main()
//{
//   int arr[10]={1,2,35,6,8,9,3,0,5,4},i,max,min;
//   int flag1,flag2;
//   for(i=0;i<10;i++)
//   {
//   	scanf("%d",&arr[i]);
//   }
//   max=min=arr[0];
//   for(i=0;i<10;i++)
//   {
//   	if(arr[i]>max)
//   	{
//   		max=arr[i];
//   		flag1=i;
//	}
//   }
//     for(i=0;i<10;i++)
//   {
//   		if(arr[i]<min)
//   	{
//   	   min=arr[i];flag2=i;
//	}
//   }
//      while(flag1>0)
//      {
//      	arr[flag1]=arr[flag1-1];
//      	flag1--;
//	  }
//	  while(flag2<10)
//      {
//      	arr[flag2]=arr[flag2+1];
//      	flag2++;
//	  }
//  arr[0]=max; arr[9]=min;
//  for(i=0;i<10;i++)
//  {
//  	printf("%d\n",arr[i]);
//  }  
//	return 0;	
//}
//��ӡ쳲���������ǰ10�ʹ�����飩
 //   1  1  2  3  5  8  13   21  34

//#include<stdio.h>
//int main()
//{
//
//    int arr[10]={1,1},i,t;
//    for(i=2;i<10;i++)
//    {
//    	arr[i]=arr[i-1]+arr[i-2];
//	}
//     for(i=0;i<10;i++)
//     {
//     	 printf("%d\n",arr[i]);	
//     }
//	return 0;	
//}
//�������������飬����ϲ�Ϊһ�������
//��������Ȼ���ֵ���,�������¿����µĿռ�(����ʹ������)
//#include<stdio.h>  
//int main()
//{
//	int a[5]={1,3,5,7},b=2;
//	int i,j,end,temp1,temp2;
//	end=a[3];
//	if(b>end)
//	{
//		a[4]=b;
//	}
//	else 
//	{
//	 for(i=0;i<5;i++)
//	 {
//	   if(a[i]>b)
//	   {
//	   	temp1=a[i];//ԭ����ֵ����temp1 
//	   	a[i]=b;//���� 
//	   	for(j=i+1;j<5;j++)
//	   	{
//	   	  temp2=a[j];a[j]=temp1;temp1=temp2;	
//		}
//		break;
//	   }		
//	 }		
//	}
//	  for(i=0;i<5;i++)
//	  {
//	  	printf("%d\n",a[i]);
//	  }	
//return 0;
//}

//������ 
//#include<stdio.h>  
//int main()
//{
//    	
// int a[4+3]={2,4,6,7},b[3]={1,3,5};
// int i,j,k,n;
// int end1,c,end2,temp1,temp2,count=0;
//  for(i=0;i<7;i++)
//  {
//  	for(j=0;j<3;j++)//2 1
//  	{
//  	   end1=a[3];
//  	   if(b[0]>end1)
//  	   {
//  	   	a[4]=b[0];a[5]=b[1];a[6]=b[2];
//	   }
//	  else 
//	  {
//	  	c=b[j];
//	  	if(a[i]>c)
//	  	{
//	  	    temp1=a[i];
//			  a[i]=c;
//			for(k=i+1;k<7;k++)	
//			{
//			 temp2=a[k];
//			 a[k]=temp1;
//			 temp1=a[k]	;
//			}
//			count++;
//			if(count>=2)
//			{
//				break;
//			}
//			for(n=0;n<3;n++)
//			{
//				b[n]=b[n+1];
//			}
//		}	  		
//	  }	  	
//	 }
//  }
//  for(i=0;i<7;i++)
//	  {
//	  	printf("%d\n",a[i]);
//	}
//	return 0;	
//}
#define M  4
#define N  3
#include<stdio.h>
int main()
{
   int a[M+N]={2,4,6,7},b[N]={1,3,5};
   int i,j,k,t=0,c;
   int end1=a[M-1],end2=b[N-1];//a3 b2
   if(end1>end2)
   {//��a�� 
   	for(i=0;i<M+N;i++)
 {	 //ÿ��a�е�ÿһ��Ԫ�غ�b[0]�Ƚ�   
     if(a[i]>=b[0])//��b[0]��Ļ�
 		{
 		for(k=M+N-1;k>i;k--)//��b[0]����a��ǰ�棬��������Ųһ��  
 		{
 			a[k]=a[k-1];  //����Ų���յڼ���		
		}
 		a[i]=b[0]; 
		t++;//���� 
		if(t>=N)
		{
		break;		
		}
		for(j=0;j<N;j++)//b��ǰһ�� 
 			{
 			b[j]=b[j+1]; 		
			}	
		}		
 }
 for(k=0;k<M+N;k++)
 {
 	printf("%d\n",a[k]);
 }
   }
 else 
 {//b��  
 c=b[2];
   	for(i=0;i<M+N;i++)
 {	 //ÿ��a�е�ÿһ��Ԫ�غ�b[0]�Ƚ�   
     if(a[i]>=b[0])//��b[0]��Ļ�
 		{
 		for(k=M+N-1;k>i;k--)//��b[0]����a��ǰ�棬��������Ųһ��  
 		{
 			a[k]=a[k-1];  //����Ų���յڼ���		
		}
 		a[i]=b[0]; 
		t++;//���� 
		if(t>=N)
		{
		break;		
		}
		for(j=0;j<3;j++)//b��ǰһ�� 
 			{
 			b[j]=b[j+1]; 		
			}	
		}		
 }
 a[M+N-1]=c;
 for(k=0;k<M+N;k++)
 {
 	printf("%d\n",a[k]);
 }
 } 
 return 0; 
}
 

//��һ���Ѿ��ź�������顣
//������һ������Ҫ��ԭ���Ĺ��ɽ�������������
//#include<stdio.h>
//int main()
//{
//int a[11]={1,4,6,9,13,16,19,28,40,100};
//int temp1,temp2,number,end,i,j;
//printf("original array is:\n");
//for(i=0;i<10;i++)
//printf("%5d",a[i]);
//printf("\n");
//printf("insert a new number:");
//scanf("%d",&number);//5
//end=a[9];
//if(number>end)
//a[10]=number;
//else
//{
//for(i=0;i<10;i++)
//{ if(a[i]>number)
//{temp1=a[i];
//a[i]=number;
//for(j=i+1;j<11;j++)
//{temp2=a[j];
//a[j]=temp1;
//temp1=temp2;
//}
//break;
//}
//}
//}
//for(i=0;i<11;i++)
//printf("%6d",a[i]);
//return 0;	
//}
//#include<stdio.h>
//int main()
//{
//
//
//
//
//	return 0;	
//}
//#include<stdio.h>
//int main()
//{
//
//
//
//
//	return 0;	
//}
//#include<stdio.h>
//int main()
//{
//
//
//
//
//	return 0;	
//}
//#include<stdio.h>
//int main()
//{
//
//
//
//
//	return 0;	
//}














