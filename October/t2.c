// #include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	if(n==0)
//	{
//	printf("K��\n");	
//	}
//	else 
//	{
//		if(n==1)
//	 { printf("���");} 
//	 else  	
//	{ printf("ѧc++");}	
//	}
//	return 0;
// } 
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float a,b,c;float x1,x2;
//	printf("������һԪ���η��̵�ϵ��\n");
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
//		 	printf("������\n");
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
//		 	printf("������\n");
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
//   	printf("�ȱ�������\n");	
//	   }
//	else 
//	   if(a==b ||b==c ||a==c)
//	   {
//	   	printf("����������\n");
//	   }
//	   else  if(a*a+b*b==c*c ||a*a+c*c==b*b ||b*b+c*c==a*a)
//	   {
//	   	printf("ֱ��������\n");
//	   }
//	   else 
//	   {
//	   	printf("����������\n");
//	   }
//	   con=(a+b+c)/2;
//	   area=sqrt(con*(con-a)*(con-b)*(con-c) );
//	   printf("%f\n",area); 
//   }
//   else  
//   {
//   	printf("����������\n");
//   }
//	return 0;
// }

//2,�ַ� 
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
//		default : printf("��Ч�ɼ�\n");break;
//	}
//	}	
//else {
//     printf("��Ч�ɼ�\n");	
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
				printf("��3,5,7����\n");
			}
			else {
				printf("��3,5����\n");
		     	}
		}
		else
		{
			if(n%7==0)
			{
			printf("��3,7����\n");	
			}
			else{
				printf("��3����\n");	
			}
		}
	}
	else {
		if(n%5==0)
		{
			if(n%7==0)
			{
				printf("��5,7����\n");	
			}
			else {
				printf("��5����\n");		
			}
		}
		else if(n%7==0)
		{
		printf("��7����\n");	
		}
		else{
		printf("No\n");		
		}
	}
	return 0;
 } 
 
 
 
 
 
