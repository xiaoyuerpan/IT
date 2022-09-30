//#include<stdio.h>
//int main()
//{
//	int a,b,c,t;
//	scanf("%d %d %d",&a,&b,&c);
//	if(a<b)
//	{
//	t=b;b=a;a=t;
//    }
//    if(a<c)
//	{
//	t=c;c=a;a=t;
//    }
//    if(b<c)
//	{
//	t=c;c=b;b=t;		
//	}	
//	printf("三个数从大到小依次排列%d %d %d\n",a,b,c);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char ch;
//	scanf("%c",&ch);
//	if(ch>='a'&&ch<='z')
//	{
//		if(ch<='u')//a+21
//		{
//		printf("%c",ch+5);	
//		}
//	else 	printf("%c",ch-21);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i=1;
//	for( i=1;i<=100;i++)
//	{
//		if(i%3==0 && i%10==6)
//		{
//			printf("%d\n",i);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i;
//	int a,b,c;
//	for(i=100;i<=999;i++)
//	{
//		a=i/100;b=i/10%10;c=i%10;
//	     if(a*a*a+b*b*b+c*c*c==i)
//		 printf("%d\n",i);	
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a,b,c;
//    for(a=1;a<5;a++)
//    for(b=1;b<10;b++)
//    for(c=1;c<20;c++)
//     if(20*a+10*b+5*c==100)
//     printf("%d %d %d\n",a,b,c);	
//   return 0;
//}
//#include <stdio.h>
//int main()
//{
//   int i,j;
//   for(i=1;i<=9;i++)
//   {
//   	for(j=i;j<=9;j++)
//   	{
//   	printf("%d",j);
//   }
//   printf("\n");
//   }
//return 0;
//} 
//#include<stdio.h>
//int main()
//{
//	int year;
//	double ori,add,rate;
//	scanf("%lf %d",&ori,&year);
//	switch(year)
//	{
//	case 1: rate=0.63/100;break;
//	case 2: rate=0.66/100;break;
//	case 3: case 4: rate=0.69/100;break;
//	case 5: case 6: case 7: rate=0.75/100;break;
//	default: rate=0.84/100;break;
//	}
//    add=ori*12*rate*year;
//    printf("%f",add+ori);	
//	return 0;
// } 
//#include<stdio.h>
//int main()
//{
//	int a,money;
//	printf("请输入本月的利润a\n");
//	scanf("%d",&a);
//	if(a<=100000)
//	money=a*0.1;
//	else if(a<=200000)
//	money=100000*0.1+(a-100000)*0.075;
//	else if(a<=400000)
//	money=200000*0.075+(a-200000)*0.05;
//	else if(a<=600000)
//	money=400000*0.05+(a-400000)*0.03;
//	else if(a<=1000000)
//	money=600000*0.03+(a-600000)*0.015;
//	else 
//	money=1000000*0.015+(a-1000000)*0.001;
//	printf("%d",money);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//   int data1,data2,data;	
//	char op;
//	scanf("%d %c %d",&data1,&op,&data2);
//    if(op=='+')
//    data=data1+data2;
//      if(op=='-')
//    data=data1-data2;
//      if(op=='*')
//    data=data1*data2;
//      if(op=='/')
//    data=data1/data2;
//	printf("data=%d",data);	
//	return 0;
//}
//#include<stdio.h>
//#include<math.h> 
//int main()
//{
// int i;
// int x,y;
// for(i=1;i<=10000;i++)	
// {
// 	x=sqrt(i+100);
// 	y=sqrt(i+368);//再加上268 
// 	if(x*x==i+100 && y*y==i+368)
//   printf("%d\n",i);	
// }	
//	return 0;
// } 
//#include<stdio.h>
//int main()
//{
//	int i;
//	int a,b,c;
//	for(i=100;i<1000;i++)
//	{
//	a=i/100;b=i/10%10;c=i%10;	
//		if(a+b>c && a+c>b && b+c>a)	
//		printf("%d\n",i);
//	}	
//	return 0;
//} 
//#include<stdio.h>
//int main()
//{
//	int i,j,k;
//   for(i=1;i<=9;i++)//行数	
//	{
//	for(j=1;j<=i;j++)	//每行对应的个数1-1 2-2 
//	{
//		k=i*j;
//		printf("%d*%d=%d ",i,j,k);
//	}
//	printf("\n");		
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//   int i,j,n;
//   char ch;
//  // scanf("%c",&ch);
//   //n=ch-'A'+1;
//   for(i=1;i<=6;i++)//行数 
//   {
//   	for(j=1;j<=i;j++) 
//   	{
//   		printf("%c",'F'-j+1);	
//	}
//	printf("\n");	
//  }		
//	return 0;
//} 
#include<stdio.h>
int main()
{
	int x;
	int a,b,c,d; 
	scanf("%d",&x);//5位数
	a=x%10;b=x/10000;
	c=x%100/10;d=x/1000%10;
	if(a==b && c==d)
	{
		printf("%d是回文数\n",x);
	}
	else 
		printf("%d不是回文数\n",x);
	return 0;
}

