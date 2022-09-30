//#include<stdio.h>
//int main()
//{
//	int w=1,x=2,y=3,z=4,a; 
//	a=w<x?w:y<z?y:z;
//	printf("%d",a);//1

//int x=0,y=3,z=3,a;
// a=x%2&&y==z;
// printf("%d",a);//0

//           int w=3,z=7,x=10;
//    		printf("%d\n",x>10?x+100:x-10);
//    		printf("%d\n",w++||z++);
//    		printf("%d\n",!w>z);
//    		printf("%d\n",w&&z);
//int x=0,a=0,b=0;
//if(x==a+b) printf("* * * *\n");
//else   printf("# # # #\n");

//int a=-1,b=4,k;
//k=(a++<=0)&&(!(b--<=0));
//printf("%d,%d,%d\n",k,a,b);
//int x=4,y=0,z;
//  x*=3+2; 
//printf("%d",x);
//  x*=(y==(z=4)); 
//printf("%d",x);
//int x,y,z;
//  x=3; y=z=4;
//  printf("%d",(x>=z>=x)?1:0);
//  printf("%d",z>=y && y>=x);

// int x=1,y=1,z=10;
// if(z<0)
//if(y>0) x=3;
//else  x=5;
//printf("%d\t",x);  // 1
//if(z=y<0) x=3;
//else if(y==0) x=5;
//else x=7;
//printf("%d\t",x);//7
//printf("%d\t",z);//0
//char x='B';
//  switch(x)
//    { case 'A': printf("It is A.");
//      case 'B': printf("It is B.");
//      case 'C': printf("It is C.");
//      default: printf("other.");
//    }
//int x=1,y=0,a=0,b=0;
//  switch(x)
//    { case 1: switch(y)
//                 { case 0: a++;break;
//                   case 1: b++;break;
//                 }
//      case 2: a++;b++;break;
//      case 3: a++;b++;
//                 }
//                printf("a=%d,b=%d\n",a,b);
//int a=5,b=6,c=7,d=8;
//  printf("%d",d=a/2&&b==c||!a); 
//   int x=10,y,z;y=z=x;x=y==z;
//   printf("%d",x);
//int x,y;
//scanf("%d",&x);
//if(x<0)       y=2*x+3      ;   
//   if(x=0)          y=0;
//    else       y=(x+7)/3;
//printf("%d",y);
//}

//2．输入一个字符，判断它如果是小写字母输出其对应大写字母；
//如果是大写字母输出其对应小写字母；
//如果是数字输出数字本身；
//如果是空格，输出"space"；
//如果不是上述情况，输出"other"
//#include<stdio.h>
//int main()
//{
//	char ch;
//	scanf("%c",&ch);
//	if(ch>='A'&& ch<='Z')
//	printf("%c",ch+32);
//  else if(ch>='a'&& ch<='z')
//	printf("%c",ch-32);
//	else if(ch>='0'&&ch<='9')
//		printf("%c",ch);
//	else if(ch==' ')
//	printf("space");
//	else 
//		printf("other"); 
//return 0; 
//}
//#include<stdio.h>
//int main()
//{
//	int a,b,c,max;
//	scanf("%d %d %d",&a,&b,&c);
//     if(a>b)
//      max=a;
//else max=b;
//     if(max<c)
//     max=c;
//     printf("%d",max);
//  if(a>b)
//  {
//  	if(a>c)
//  	printf("%d",a);
//  	else printf("%d",c);
//  }
//  else if(b>c)
//   printf("%d",b);
//  else printf("%d",c);
//	return 0;
//}
//	int n;
//	scanf("%d",&n);
//	switch(n)
//	{
//		case 1:printf("Monday");break;
//		case 2:printf("Tuesday");break;
//		case 3:printf("Wednesday");break;
//		case 4:printf("Thursday");break;	
//		case 5:printf("Friday");break;
//		case 6:printf("Saturday");break;
//		case 7:printf("Sunday");break;
//	}
//#include<stdio.h>
//int main()
//{
//  int score;
//  scanf("%d",&score);
//  if(score>=0 &&score<=100)
//  {
//  	switch(score/10)
//  	{
//  	case 6:	printf("D"); break;
//  	case 7:	printf("C"); break;
//  	case 8:	printf("B"); break;
//  	case 9:	
//	case 10:  printf("A"); break;
//  	default: printf("E"); break;
//	}	
//  }
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	double x,y;
//	int flag;
//	scanf("%lf",&x);
//	flag=(x>=0 && x<15)?1:(x<30)?2:(x<45)?3:(x<75)?4:(x<90)?5:6;
//	switch(flag)
//	{
//	case 1:y=(40*x)/15+10; printf("%f",y); break; 
//	case 2:y=50;printf("%f",y);break;
//	case 3: y=50-10*(x-30)/15;printf("%f",y);break;
//	case 4:y=40+20*(x-45)/30;printf("%f",y);break;
//	case 5: y=60-10*(x-75)/15;printf("%f",y);break;
//	default :printf("y无意义\n");break;
//	}
//	return 0;	
//}
//#include<stdio.h>
//int main()
//{
//     int x,y,z;
//   x=y=z=-1;
//     x++ && --y && z-- || --x;
//     printf("x=%d\ty=%d\tz=%d\n",x,y,z);//  0 -2 -2
//  return 0;	
//}
//#include <stdio.h>
//main()
//{ int x;
//  scanf("%d",&x);
//  if(x++>5)
//     printf("x=%d",x);
//  else
//  { 
////printf("--x=%d\n",--x);
//printf("x--=%d\n",x--);
//}
//}
//#include <stdio.h>
//main()
//{ int a,b,c,d,x;
//  a=c=0;
//  b=0;
//  c=20;
//  if(a)  d=d-10;
//  else  if(b)
//        if(c)
//          x=15;
//        else
//          x=25;
//  printf("d=%d,x=%d\n",d,x);
//}
//#include <stdio.h>
//main( )
//{ int s,t,a,b;
//  scanf("%d,%d",&a,&b);//2 7
//  s=1;
//  t=1;
//if(a>0)
//   s=s+1;//2
//if(a>b)
//  t=s+t;//t=3
//else
//  if(a==b)
//    t=5;
// else
//  t=2*s;//t=4
//printf("s=%d,t=%d\n",s,t);
//}
//#include <stdio.h>
//main( )
//{ int x=1,y=0;
//  switch(x)
//  { case  1:
//       switch(y)
//       { case  0: printf("Title 1\n"); break;
//         case  1: printf("Title 2\n"); break;
//       }
//case  2: printf("Title 3\n");
////}   }
//#include <stdio.h>
//main( )
//{ int a,b,c;
//  a=b=c=1;
//  ++a || ++b && ++c;
//  printf("%d,%d,%d\n",a,b,c);//2 1 1
//}
#include <stdio.h>
main( )
{ int a,b,c;
  a='E'; b='J'; c='W';
if(a>b)//0
     if(a>c)
     printf("%d\n",a);
else
   printf("%c\n",c);
  else  if(b>c)
          printf("%c\n",b);
        else
          printf("%c\n",c);//w
}




