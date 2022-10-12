// #include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	if(n==0)
//	{
//	printf("K歌\n");	
//	}
//	else 
//	{
//		if(n==1)
//	 { printf("逛街");} 
//	 else  	
//	{ printf("学c++");}	
//	}
//	return 0;
// } 
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float a,b,c;float x1,x2;
//	printf("请输入一元二次方程的系数\n");
//	scanf("%f %f %f",&a,&b,&c);
//	if(a!=0)
//	{	
//		if(b*b-4*a*c>=0)
//		{
//			x1=(-b+sqrt(b*b-4*a*c))/2*a;
//			x2=(-b-sqrt(b*b-4*a*c))/2*a;
//			printf("x1=%f,x2=%f\n",x1,x2);
//		 } 
//		 else 
//		 {
//		 	printf("不成立\n");
//		 }	 
//	}
//	else
//	  {
//	  	if(b!=0)
//	  	{
//	  		x1=(-1)*c/b;
//	  		printf("x1=%f\n",x1);
//		}
//		  else {
//		 	printf("不成立\n");
//		      }
//	  }
//	return 0;
// } 
// #include<stdio.h>
// #include<math.h>
//int main()
//{
//	float x,y;
//	int flag;
//	scanf("%f",&x);
//	flag=(x>=0 && x<2)?1:(x<6)?2:(x<10)?3:4;
//	switch(flag)
//	{
//		case 1: y=x; break;
//		case 2: y=x*x+1;break;
//		case 3: y=sqrt(x+1);break;
//		default : y=1/(x+1);break;
//	}
//	printf("y=%f\n",y);
//	return 0;
// } 

//10.12pm 
//1 
// #include<stdio.h>
// #include<math.h>
//int main()
//{
//   float	a,b,c;
//   float con,area;
//   scanf("%f %f %f",&a,&b,&c);
//   if(a+b>c && a+c>b && b+c>a)
//   {
//   	if(a==b && b==c)
//   	{
//   	printf("等边三角形\n");	
//	   }
//	else 
//	   if(a==b ||b==c ||a==c)
//	   {
//	   	printf("等腰三角形\n");
//	   }
//	   else  if(a*a+b*b==c*c ||a*a+c*c==b*b ||b*b+c*c==a*a)
//	   {
//	   	printf("直角三角形\n");
//	   }
//	   else 
//	   {
//	   	printf("任意三角形\n");
//	   }
//	   con=(a+b+c)/2;
//	   area=sqrt(con*(con-a)*(con-b)*(con-c) );
//	   printf("%f\n",area); 
//   }
//   else  
//   {
//   	printf("不是三角形\n");
//   }
//	return 0;
// }

//2,字符 
//#include<stdio.h>
//int main()
//{
//	char str;
//	int flag;
//    str=getchar();
//	flag=str>='a'&&str<='z'?1:str>='A'&& str<='Z'?2:str>='0'&&str<='9'?3:str==' '?4:5;
//	switch(flag)
//	{
//		case 1: str=str-32; putchar(str);break;
//		case 2: str=str+32; putchar(str);break;
//		case 3: putchar(str); break;
//		case 4: str=' ';puts("space"); break;
//		default : puts("other");break;
//	}	
//	return 0;
// } 

//3,
//#include<stdio.h>
//int main()
//{
//	float s;int flag;
//	scanf("%f",&s);
//	if(s>=0 && s<=100) 
//	{
//		flag=(s>=0 &&s<60)?1:s<70?2:s<80?3:s<90?4:s<=100?5:6;
//    	switch(flag)
//	{
//		case 1: printf("E\n");break;
//		case 2: printf("D\n");break;
//		case 3: printf("C\n"); break;
//		case 4: printf("B\n"); break;
//		case 5: printf("A\n"); break;
//		default : printf("无效成绩\n");break;
//	}
//	}	
//else {
//     printf("无效成绩\n");	
//     }			
//	return 0;
// } 
// 4
  #include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%3==0 )
	{
		if(n%5==0)
		{
			if(n%7==0)
			{
				printf("被3,5,7整除\n");
			}
			else {
				printf("被3,5整除\n");
		     	}
		}
		else
		{
			if(n%7==0)
			{
			printf("被3,7整除\n");	
			}
			else{
				printf("被3整除\n");	
			}
		}
	}
	else {
		if(n%5==0)
		{
			if(n%7==0)
			{
				printf("被5,7整除\n");	
			}
			else {
				printf("被5整除\n");		
			}
		}
		else if(n%7==0)
		{
		printf("被7整除\n");	
		}
		else{
		printf("No\n");		
		}
	}
	return 0;
 } 
 
 
 
 
 
