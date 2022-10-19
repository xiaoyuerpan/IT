//#include <stdio.h>
//#include <string.h>
// 
//int main ()
//{
//   char str1[18]= "abaok";
//   char str2[18]= "abaok";
//   strcmp(str1,str2);
//   int s = strcmp(str1,str2);
//   printf("%d",s);
//   return(0);
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//   char a[20] = "noqeobsoobsoob";
//   char b[10] = "oob";
//   char *c;
//   c = strstr(a, b);
//   printf("%s\n", c); 
//   return(0);
//}
//二分查找 
//#include <stdio.h>
//#define N  10
//int main()
//{
//	char a[N]={12,23,34,45,66,77,86,92,103,112};
//	int  i,j; int b;
//	int left=0,right=N-1,mid;
//	scanf("%d",&b);//给一个数 
//	while(left<=right)
//	{
//		int mid=(left+right)/2;
//		if(a[mid]<b)
//		{
//			left=mid+1;
//		}
//		else if(a[mid]>b)
//		{
//			right=mid-1;
//		 } 
//		 else
//		 {
//		 	printf("yes\n");
//		 	return 0;
//		 }
//	 } 
//	 printf("no");
//   return 0;
//}
//冒泡排序
//#include<stdio.h>
//#define  N   10
//int main()
//{
//	int i,j;
//	int a[N]={8,59,65,12,32,54,85,65,0,32};//0-8
//	for(i=0;i<N-1;i++)//当前趟中未排序序列的最值放入已排序序列中
//	{
//	  for(j=0;j<N-1-i;j++)//不断交换直到将当前趟中的最值放入已排序序列中
//	  {//0-8
//	  	if(a[j]>a[j+1])
//	  	{
//	  		int t=a[j];
//	  		a[j]=a[j+1];
//	  		a[j+1]=t;	
//		}
//	  }	  
//	}
//	for(i=0;i<N;i++)
//	{
//		printf("%d\n",a[i]);		
//	}
//	return 0;	
//}
// 
//选择排序
//#include<stdio.h>
//#define  N  10
//int main()
//{
//	int a[10]={2,36,54,25,98,7,4,52,32,19};
//	int i,j;
//	for(i=0;i<N;i++)
//	{
//		int max=i;
//		for(j=i+1;j<N;j++)
//		{
//			if(a[max]<a[j])
//			max=j;	
//		}
//		if(max!=i)
//		{
//			int t=a[max];
//			a[max]=a[i];a[i]=t;
//		}	
//	}
//	//打印
//	for(i=0;i<N;i++)
//	{
//		printf("%d\n",a[i]);
//	 } 
//	return 0;
// } 
//请在小于99999的正整数中找符合下列条件的数，
//它既是完全平方数，又有两位数字相同，如：144，676。用c语言编写（不能用数字转换成字符串）(华为) 
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i,j;
//	int  a,b,c,d,e;
//	int x;
//	for(i=10;i<99999;i++)
//	{
//      if(i<100)
//	  {
//	  	x=sqrt(i);a=i/10;b=i%10; 
//	  	if(x*x==i && a==b)
//	  	{
//	  		printf("%d\t",i);		
//		}
//	  }
//   else	if(i<1000)
//	  {
//	  	x=sqrt(i);a=i/100;b=i/10%10;c=i%10; 
//	  	if(x*x==i && (a==b || a==c || b==c)  )
//	  	{
//	  		printf("%d\t",i);		
//		}	
//	  }
//	else	if(i<10000)//1000
//	  {
//	  	x=sqrt(i);a=i/1000;b=i/100%10;c=i/10%10;d=i%10;
//	  	if(x*x==i && (a==b || a==c || a==d || b==c ||b==d || c==d)  )
//	  	{
//	  		printf("%d\t",i);		
//		}	
//	  }
//	else	if(i<100000)//10000
//	  {
//	  	x=sqrt(i);a=i/10000;b=i/1000%10;c=i/100%10;d=i/10%10;e=i%10;
//	  	if(x*x==i && (a==b || a==c || a==d ||a==e|| b==c ||b==d || b==e||c==d ||c==e)  )
//	  	{
//	  		printf("%d\t",i);		
//		}	
//	  }	
//}
//	return 0;
// } 
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i=0,j,k,num=10;
//	int n,x;	
//while(num<99999) 
////对i数进行取每一位 ,哪个有数字，哪个数组就加1  
// {	//定义a数组表示每一位数字存放的个数	
//    int a[10]={0};//int a[10];//数字0-9 ，初值是1
// 	n=num;//保存num数字 
// 	x=sqrt(num);
// 	j=0;
//   while(num>0) /*   判断两位数字相同*/ 
//   {
//   	j=num%10;
//   	a[j]++;
//   	num=num/10;
//   }
//   i=0;
//  while (a[i] <= 1 && i < 10)
//     i++;   
//    for(i=0;i<10;i++)
//    {
//    	if(x*x==n && a[i]>=2)
//    	{
//    	printf("%d\t",n);
//		break;	
//		} 
//	}  
//	 num=n+1;     	
// }	
//	return 0;
// } 
//#include<stdio.h>
//#include<math.h>
////函数havesamenum确认num是否满足条件
//int havesamenum(int num)
//{
//    int i = 0, j;
//    char a[10] = {0};
//    while (num > 0)
//    {
//        j = num % 10;
//        a[j] += 1;
//        num = num / 10;
//    }
//    while (a[i] <= 1 && i < 10)
//        i++;
//    if (i < 10)
//        return 1;
//    else
//        return 0;
//}
//void main(void)
//{
//    int i, j, m;
//    m = (int)sqrt(99999);
//    for (i = 1; i < m; i++)
//    {
//        j = i * i;
//        if (1 == havesamenum(j))
//            printf("%6d\t", j);
//    }
//}























