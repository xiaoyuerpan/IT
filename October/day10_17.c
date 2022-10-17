//输出100以内能被3整除且个位数为6的所有整数

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
//输入1 个正整数 n, 计算并输出 s 的前n项的和。
// S = 1 -1/2 + 1/3 - 1/4 + 1/5 -1/6 + ……

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
//写一个程序，由用户输入一个整数，判断这个数是否是素数（素数：只能被1和本身整除的数）；
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
//	  	printf("不是素数\n"); 
//		break;	
//		}
//	   else  
//	   {
//	   	printf("是素数\n"); 
//		break;	
//	   }
//   }
//   }
//else  if(n==2)
//   {
//   	printf("是素数\n"); 
//   }
//    else 
//	{
//   	printf("不是素数\n"); 
//   }	 
//	return 0;
//}
//一个整数，它加上100后是一个完全平方数，
//它加上368又是一个完全平方数，请问该数是多少？ (完全平方数满足一个数的平方根的平方等于该数) 
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
//求所有个位、十位、百位数字能组成一个三角形三边的三位数。（注：三角形任意两边之和大于第三边）
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
//练习1：验证数组连续存储
//练习2：验证部分初始化中，哪些元素被初始化，未初始化的元素值为多少？
//练习3：验证如何从键盘输入数据到数组中
//#include<stdio.h>
//int main()
//{
//验证1	
//  int arr[4],i;
//  for(i=0;i<4;i++)
//  {
//  	scanf("%d",&arr[i]);	  	
//  }	
//   for(i=0;i<4;i++)
//  {
//   printf("%p\n",&arr[i]);	  	
//  }
 	
//验证2	
//  int arr[4]={1,2},i;
//   for(i=0;i<4;i++)
//  {
//   printf("arr=%d\n",arr[i]);	  	
//  }
 	

//验证3	
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

//将具有10个整型元素的数组倒序并输出，不开辟新数组空间
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
//计算数组大小 
//#include<stdio.h>
//#define VAL(a)    sizeof(a)/sizeof(arr[0]) 
//int main()
//{
//   int arr[10]={0};
//   printf("count=%d\n",VAL(arr));
//	return 0;
//}

//练习1：验证二维数组存储方式
//练习2：验证部分初始化中的普通初始化和按行初始化的不同
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
//1,从终端输入10个数，将最大值放在第一个数，最小值放在最后一个数，其他数不动(不能使用排序)
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
//打印斐波那契数列前10项（使用数组）
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
//有两个递增数组，将其合并为一个数组后，
//新数组仍然保持递增,不能重新开辟新的空间(不能使用排序)
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
//	   	temp1=a[i];//原来的值存在temp1 
//	   	a[i]=b;//覆盖 
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

//有问题 
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
   {//往a放 
   	for(i=0;i<M+N;i++)
 {	 //每次a中的每一个元素和b[0]比较   
     if(a[i]>=b[0])//比b[0]大的话
 		{
 		for(k=M+N-1;k>i;k--)//把b[0]放在a的前面，其他往后挪一个  
 		{
 			a[k]=a[k-1];  //倒着挪，空第几个		
		}
 		a[i]=b[0]; 
		t++;//计数 
		if(t>=N)
		{
		break;		
		}
		for(j=0;j<N;j++)//b往前一个 
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
 {//b放  
 c=b[2];
   	for(i=0;i<M+N;i++)
 {	 //每次a中的每一个元素和b[0]比较   
     if(a[i]>=b[0])//比b[0]大的话
 		{
 		for(k=M+N-1;k>i;k--)//把b[0]放在a的前面，其他往后挪一个  
 		{
 			a[k]=a[k-1];  //倒着挪，空第几个		
		}
 		a[i]=b[0]; 
		t++;//计数 
		if(t>=N)
		{
		break;		
		}
		for(j=0;j<3;j++)//b往前一个 
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
 

//有一个已经排好序的数组。
//现输入一个数，要求按原来的规律将它插入数组中
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














