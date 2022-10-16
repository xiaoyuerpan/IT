/*1,输入1个四位数，求各位数字的平方和
输入 1234，输出30。*/
//#include<stdio.h>
//int main()
//{
//   	int n,a,b,c,d,sum=0;
//   	scanf("%d",&n);
//   	if(n>=1000 && n<10000)
//   	{
//   	   a=n%10;b=n%100/10;c=n/100%10;d=n/1000;
//   	   sum=a*a+b*b+c*c+d*d;	
//   	   printf("%d\n",sum);	
//	}
//  else  printf("输入错误\n");	
//  return 0;
//}
//2
//#include<stdio.h> 
//int main()
//{
//	int i,j;
//	/*上面*/
//	for(i=1;i<=4;i++)
//	{
//		for(j=1;j<=4-i;j++)	//打印空格
//		{	
//		printf(" ");	
//		}
//		for(j=1;j<=2*i-1;j++)//打印*
//		{	
//		printf("*");	
//		}
//	printf("\n");		
//	}
//		/*下面*/
//	for(i=2;i<=4;i++)
//	{
//		for(j=1;j<=i-1;j++)	//打印空格
//		{	
//		printf(" ");	
//		}
//		for(j=1;j<=7-2*(i-1);j++)//打印*
//		{	
//		printf("*");	
//		}
//	printf("\n");		
//	}
//	return 0;
//}
//3 
//#include<stdio.h> 
//int main()
//{
//	int i,j,k;
///*上面*/
//	for(i=0;i<5;i++)
//	{
///*上左*/
//	  for(j=0;j<4-i;j++)
//	  {
//	  	printf(" ");
//	  }
//	  	printf("*");
///*上右*/
//	 for(j=0;j<2*i-1;j++)
//	  {
//	  	printf(" ");
//	  }
//	 if(i==0) 
//	 {
//	 printf(" ");	
//	 }
//	 else  
//	 {
//	 	printf("*");
//	 }
//	 printf("\n"); 	
//	} 
///*-----------------------*/
///*x下面*/
//	for(i=3;i>=0;i--)
//	{
///*下左*/
//	  for(j=0;j<4-i;j++)
//	  {
//	  	printf(" ");
//	  }
//	  	printf("*");
///*下右*/
//	 for(j=0;j<2*i-1;j++)
//	  {
//	  	printf(" ");
//	  }
//	 if(i==0) 
//	 {
//	 printf(" ");	
//	 }
//	 else  
//	 {
//	 	printf("*");
//	 }
//	 printf("\n"); 	
//	} 	 
//	return 0;
//}
//4
//#include<stdio.h> 
//int main()
//{
//	int i,j;
//	for(i=0;i<5;i++)
//	{
//		/*左边*/
//	  for(j=0;j<5-i-1;j++)//空格 
//	  {
//	  	printf(" ");
//	  }
//	  for(j=1;j<=i+1;j++)//数字 
//	  {
//	  	printf("%d",j);
//	  }
//	  
//	  /*右边*/
//	  for(j=i;j>0;j--)//数字 
//	  {
//	  	printf("%d",j);
//	  }
//	  for(j=0;j<5-i-1;j++)//空格 
//	  {
//	  	printf(" ");
//	  } 
//	 printf("\n") ;  
//	}
///*----------------------------------------*/	
//	//下面 
//	for(i=4;i>=0;i--)
//	{
//		/*左边*/
//	  for(j=0;j<5-i-1;j++)//空格 
//	  {
//	  	printf(" ");
//	  }
//	  for(j=1;j<=i+1;j++)//数字 
//	  {
//	  	printf("%d",j);
//	  }
//	  
//	  /*右边*/
//	  for(j=i;j>0;j--)//数字 
//	  {
//	  	printf("%d",j);
//	  }
//	  for(j=0;j<5-i-1;j++)//空格 
//	  {
//	  	printf(" ");
//	  } 
//	 printf("\n") ;  
//	}
//	return 0;
//}
//5,  S = n+nn+nnn+nnnn+……的值。要求控制台输入要加的数n=1和加的个数count=3
//123
//#include<stdio.h> 
//int main()
//{
//	int count;
//	long long  n,sum=0;
//	int i,t,j;
//	printf("输入n和加的个数count\n"); 
//	scanf("%lld %ld",&n,&count);
//	t=n;
//	j=10;
//	//判断n是几位数
//		while(1)
//		{
//			if(n/j==0)//56/10=5
//			{
//			break;
//			}
//			j*=10;//j=100		
//		}
//	for(i=0;i<count;i++)//0 1 2
//	{
//        sum=sum+n;
//		printf("n=%d,sum=%d\n",n,sum); 
//		n=n*j+t;     
//    }	
//	return 0;
//}
//6相邻两个奇数都为素数的这样一对数叫双胞胎素数，输出100到200之间的所有双胞胎素数。
//#include<stdio.h> 
//int main()
//{
//	int n,i,j,k,m;
//	int flag1,flag2;
//	for(n=100;n<=200;n++)
//	{
//	for(i=2;i<n;i++)//2-99
//	{
//	    flag1=0;	
//	  	if(n%i==0)
//	  	{
//	  	 flag1=1;//n不是素数
//		 break;	
//	    } 
//   }
//	  if(flag1==0)//n是素数 
//	  {
//	   m=n+2;//判断m是不是素数
//	   flag2=0; 
//	   for(k=2;k<m;k++)
//	   {
//	   	if(m%k==0)
//	  	{
//	  	 flag2=1;
//	  	 break;
//	    }
//	   } 
//	    if(flag2==0 && m<=200) 
//	   {
//	   	printf("%d %d\n",n,m); 
//	   }	
//	  }				
//}
//	return 0;
//}
//7求任一数字的所有因子的组合（仅限两个因子），
//如：15=1*15 ，15=3*5不能出现重复。
//#include<stdio.h> 
//int main()
//{
//	int n,i,j;
//	scanf("%d",&n);
//    for(i=1;i<=n;i++)
//    {
//    	j=n/i;
//       if(n%i==0  && i<j)
//	   {
//	   	 printf("%d=%d*%d\n",n,i,j);	
//       } 
//	} 
//	return 0;
//}
//将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。 
//#include<stdio.h> 
//int main()
//{
//	int n=120,k;
//	for(k=2;k<=n;k++)//2<90
//	{
//		while(n!=k)
//		{
//		if(n%k==0)
//		{
//			printf("%d\n",k);//2 3 3 5
//			n=n/k;//45 15 5 
//		}	
//		else 
//		   break;
//		}
//		if(n==k)
//		{
//		printf("%d\n",k);	
//		}
//	}
//	return 0;
//}
/*9我们把只包含因子2、3和5的数称作丑数（Ugly Number）。例如6、8都是丑数，
但14不是，因为它包含因子7。习惯上我们把1当做是第一个丑数。
求按从小到大的顺序的第100个丑数。*/
//#include<stdio.h> 
//int main()
//{
//	int k,n=1,m;
//	int count=1;
//	if(n==1)
//	printf("%d\n",n);
//	n=2;
//	while(1)
//	{	
//	    int a =n;
//		while(1)
//		{
//		if(n%2==0)
//		{
//		  n=n/2;
//		}	
//		else 
//		   break;
//		}
//		while(1)
//		{
//		if(n%3==0)
//		{
//			n=n/3;
//		}	
//		else 
//		   break;
//		}
//			
//	   	while(1)
//		{
//		if(n%5==0)
//		{
//			n=n/5;
//		}	
//		else 
//		   break;
//		}  
//		if(n==1)
//		{
//		printf("%d\n",a);	
//		 count++; 	
//	   } 
//	    if(count==100)
//		 {
//		 break;	
//		 }
//	  n=a+1;	
//	}
//	return 0;
//}
//1000！的末尾有几个0  ->
//#include<stdio.h> 
//int main()
//{
//	int i,a;
//	int count=0;
//	for(i=5;i<=1000;i++)
//	{
//		a=i;
//		while(a%5==0)
//		{
//			a=a/5;
//			count++;
//		} 
//	}
//	printf("count=%d\n",count);
//	return 0;
//}
//#include<stdio.h> 
//int main()
//{
//	
//	return 0;
//}
