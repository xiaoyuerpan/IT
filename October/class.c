//#include <stdio.h> 
//int main()
//{
//  int data1,data2,t;
//  int  div, yu;
//  scanf("%d %d",&data1,&data2);
//  if(data1<data2)
//  {
//  	t=data1;data1=data2;data2=t;
//  }
//   div=data1/data2;
//   yu=data1%data2;
//   printf("div=%d,yu=%d\n",div,yu);
//	return 0;	
//}
//------------------------------
//#include <stdio.h> 
//int main()
//{
//	return 0;	
//}
//#include <stdio.h> 
//int main()
//{
//	
//	int a,b,c,d;
//	scanf("%d %d %d",&a,&b,&c);//结果是 a-b.b-c,c-a  b=a;c=b;a=c;
//    d=c;c=b;b=a;a=d;
//	printf("a=%d,b=%d,c=%d\n",a,b,c);
//	return 0;	
//}
//#include <stdio.h> 
//#define pi 3.14
//int main()
//{
//	float r;
//	float c,s;
//	scanf("%f",&r);
//	if(r>=0)
//	{
//	c=2*pi*r;s=pi*r*r;
//	printf("c=%f,s=%f\n",c,s);		
//	}
//	else printf("您的输入有误"); 
//	return 0;	
//}
//#include <stdio.h> 
//int main()
//{
//	int data,a,b,c,sum=0;
//	scanf("%d",&data);
//	if(data>=100 && data<=999)
//	{
//		a=data%10;b=data/10%10;c=data/100;
//		sum=a+b+c;
//		printf("sum=%d\n",sum); 
//	}	
//	return 0;	
//}
//---------------------
//#include <stdio.h> 
//#include<math.h>
//int main()
//{
//	double a,b,c;
//	scanf("%lf %lf %lf",&a,&b,&c);//和、平均值、平方和以及平方和的开方，
//	double sum,eve,square ,root;
//	sum=a+b+c;
//	eve=sum/3;
//	square=a*a+b*b+c*c;
//	root=sqrt(square);
//	printf("sum=%lf,eve=%lf,square=%lf,root=%lf\n",sum,eve,square,root);
//	return 0;	
//}
#include <stdio.h> 
struct student
{
	char name[100];
	int number;
	float math;
	float english;
	float coumpter;	
}
//name         number     math      english    computer
//zhanghua     9901      80.50         87.0    80
//lina         9902      70.00         80.0    90
//wanggang     9903      87.00         76.0    78 

int main()
{
	struct student arr[3]={{"zhanghua","9901","80.50","87.0","80"}};// 9901 80.50 87.0    80
	for(int i=0;i<3;i++)
	{
	printf("%s %d %d %d %d",arr[i].name,arr[i].number,arr[i].math,arr[i].english,arr[i].coumpter);	
	}
	return 0;	
}


//#include <stdio.h> 
//int main()
//{
//	return 0;	
//}
