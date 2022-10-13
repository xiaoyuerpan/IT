//#include<stdio.h>
//int main()
//{
// int month,day;
// scanf("%d %d",&month,&day);
// switch(month)
// {
//  case 1: day<21?puts("摩羯"):puts("宝瓶"); break;
//  case 2: day<21?puts("宝瓶"):puts("双鱼"); break;
//  case 3: day<21?puts("双鱼"):puts("白羊"); break;
//  case 4: day<21?puts("白羊"):puts("金牛"); break;
//  case 5: day<21?puts("金牛"):puts("双子"); break;
//  case 6: day<21?puts("双子"):puts("巨蟹"); break;
//  case 7: day<23?puts("巨蟹"):puts("狮子"); break;
//  case 8: day<23?puts("狮子"):puts("处女"); break;
//  case 9: day<23?puts("处女"):puts("天秤"); break;
//  case 10: day<23?puts("天秤"):puts("天蝎"); break;
//  case 11: day<23?puts("天蝎"):puts("人马"); break;
//  case 12: day<23?puts("人马"):puts("摩羯"); break;
// }
// return 0; 
//}
// #include<stdio.h>
//int main()
//{
//   long long int i;
//   int bonus,bonus1,bonus2,bonus4,bonus6,bonus10;
//   scanf("%lld",&i);
//   bonus1=100000*0.1;bonus2=bonus1+100000*0.075 ;
//   bonus4=bonus2+200000*0.05;bonus6=bonus4+200000*0.03;
//   bonus10=bonus6+400000*0.015;
//   if(i<=100000)
//   bonus=i*0.1;
//   else if(i<=200000)
//   bonus=bonus1+(i-100000)*0.075;
//   else if(i<=400000)
//   bonus=bonus2+(i-200000)*0.05;
//    else if(i<=600000)
//   bonus=bonus4+(i-400000)*0.03;
//   else if(i<=1000000)
//   bonus=bonus6+(i-600000)*0.015;
//   else bonus=bonus10+(i-1000000)*0.01;
//   printf("bonus=%lld",bonus);
//	return 0;
// }

//#define printf __mingw_printf
//#include<stdio.h>
//int main()
//{
//	int sum=0,i=1;
//    long double ji=1;
//	while(i<=100)
//	{
//		if(i%2==1)
//		{
//			sum=sum+i;
//		}
//	    else
//		{
//		ji=ji*i;	
//		}
//		i++; 
//		printf("%d,sum=%d,ji=%Lf\n",i,sum,ji);		
//	}
//   	
//	return 0;
//} 
//吃桃子 
//#include<stdio.h>
//int main()
//{
//	int n=1,i=10;
//	while(i>1)
//	{	
//	n=2*(n+1);//1 4
//	i--;
//	}
//	printf("n=%d\n",n);
//	return 0;
//} 
//去掉max，min  /8 
//#include<stdio.h>
//int main()
//{
//	float score,sum,max,min,eve;
//	int i=1;
//  scanf("%f",&score);
//  sum=max=min=score;
//  while(i<=9)
//  {
//  	scanf("%f",&score);
//  	 if(score>max)
//  	 {
//  	 max=score;	
//	}
//  	 if(score<min)
//  	 {
//  	  min=score;	
//	}
//	sum+=score;
//	i++;
// }	
//   eve=(sum-max-min)/8;
//   printf("eve=%f\n",eve);
//   return 0;
//} 
//三 
//#include<stdio.h>
//int main()
//{
//	int i=0,sum=0;
//	while(i<=8)
//	{
//		int j=1,tmp=1;
//		while(j<=i)
//		{
//		   tmp*=2;	
//			j++;
//		} 
//		sum+=tmp;
//		i++;
//	} 
//	printf("sum=%d\n",sum);
//	return 0;
//} 
//
//#include<stdio.h>
//int main()
//{
//	int a=1,b=1,i=1;
//	int c;
//	c=a=b;//1 1 2 3
//	printf("%d\n",c);
//	printf("%d\n",c);
//	while(i<=18)
//	{
//	 c=a+b;
//	 printf("%-6d\n",c);
//	 a=b;
//	 b=c;
//	 i++;
//	}
//	return 0;
//} 
//#include <stdio.h>
//
//int main()
//{
///* int x = 1;
// while(x <= 100)
// {
//  printf("x = %d,hello world!\n",x);
//  x = x + 1;
// }
//
// int x = 0;
// for(x = 1;x <= 100;x = x + 1)
// {
//  printf("++x = %d,hello world!\n",x); 
// }
//*/ 
// int x = 1;
// for(;;)
// {
//  if(x > 100)
//  {
//   printf("++++++++++++++\n");
//   return 0; 
//  }
//  printf("++x = %d,hello world!\n",x);
//  x = x + 1; 
// }
//
// return 0; 
//} 
//四 ,判断是不是完数 
//#include<stdio.h>
//int main()
//{
//	
//    int n,sum=0;
//    scanf("%d",&n);
//    for(int i=1;i<n;i++)
//    {
//    	if(n%i==0)
//    	{
//    		sum=sum+i; 
//		}
//	}
//	if(sum==n)
//	{
//		printf("是完数\n");
//	}
//	else{
//	printf("不是完数\n");	
//	}
//	return 0;
//} 
//1000以内的完数 
//#include<stdio.h>
//int main()
//{
//	int sum;
//	for(int i=1;i<=1000;i++)
//	{
//		sum=0;
//		for(int j=1;j<i;j++)
//	{
//		if(i%j==0)
//		{
//			sum=sum+j;
//		}	
//	} 
//	if(sum==i)
//	{
//		printf("%d\n",i);
//	}		
//	}	
//	return 0;
//} 

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int x,y;
//	for(int i=1;i<=10000;i++)
//	{
//			x=sqrt(i+100);
//			y=sqrt(i+368);
//	 if(x*x==i+100 && y*y==i+368)
//	 {
//	 	printf("%d\n",i);
//	 }
//	} 
//	return 0;
//} 
//#include<stdio.h>
//int main()
//{
//	for(int i=1;i<=100;i++)
//	{
//		if(i%3==0 && i%10==6)
//		printf("%d\n",i);
//	}
//	return 0;
//} 
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a,b,c;
//	for(int i=100;i<1000;i++)
//	{
//		a=i%10;b=i/10%10;c=i/100;
//		if(pow(a,3)+pow(b,3)+pow(c,3)==i)
//		printf("%d\n",i);
//	}
//	return 0;
//} 
//钞票 
//#include<stdio.h>
//int main()
//{
//    for(int a=1;a<5;a++)
//    for(int b=1;b<10;b++)
//    for(int c=1;c<20;c++)
//     if(20*a+10*b+5*c==100)
//    printf("%d %d %d\n",a,b,c);	
//   return 0;
//} 
//三角数 
//#include<stdio.h>
//int main()
//{  
//     int a,b,c; 
//	for(int i=100;i<1000;i++)
//	{
//		a=i%10;b=i/10%10;c=i/100;
//		if(a+b>c &&a+c>b &&b+c>a)
//		{
//			printf("%d\n",i);
//		}
//	 } 
//	return 0;
//} 
//9*9乘法表 
//#include<stdio.h>
//int main()
//{
//	for(int i=1;i<=9;i++) 
//	{
//		for(int j=1;j<=i;j++)
//		{
//			printf("%-2d*%2d =%-2d  ",j,i,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//} 
//
//#include<stdio.h>
//int main()
//{
//	for(int i=1;i<=6;i++)
//	{
//		for(int j=1;j<=i;j++)
//		{
//			printf("%c",'F'-j+1);			
//		}
//		printf("\n");
//	} 
//	return 0;
//} 
//#include<stdio.h>
//int main()
//{
//	int a,b,m,r;
//	scanf("%d %d",&a,&b);
//	if(a<b)
//	{
//	  m=a;a=b;b=m;	
//	}
//	r=a%b;
//	while(r!=0)
//	{
//	  a=b;
//	  b=r;
//	  r=a%b;
//	}
//	printf("%d\n",b);
//	return 0;
//} 
//#include<stdio.h>
//int main()
//{
//	for(int i=1;i<=9;i++)
//	{
//		for(int j=i;j<=9;j++)
//		{
//			printf("%d",j);
//		}
//		printf("\n");
//	}	
//	return 0;
//} 
//有一分数序列 ,求出这个数列的前20项之和
//#include<stdio.h>
//int main()
//{
//	float sum=0;
//	float a=2,b=1,c;
//	for(int i=1;i<=20;i++)
//	{
//	  sum=sum+a/b;
//	  c=a+b;
//	  b=a;
//	  a=c; 
//	}
//	printf("%f",sum);
//	return 0;
//} 

//#include<stdio.h>
//int main()
//{
//	int i,j,sum=1;
//	for( i=2;i<=100;i++)
//     {
//        for(j=2;j<i;j++)
//		{ 
//			if(i%j==0)
//			{
//			sum=sum+i;	
//			break;
//			}	  	
//		} 		
//	 }
//	 printf("%d ",sum);		 
//	return 0;
//} 
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i;
//	for(i=1000;i<10000;i++)
//	{
//		if(pow(i%100+i/100,2)==i)
//		{
//			printf("%d\n",i);	
//		}
//	}
//	return 0;
//} 

//#include<stdio.h>
//int main()
//{
//	
//	return 0;
//} 
//#include<stdio.h>
//int main()
//{
//	
//	return 0;
//} 



