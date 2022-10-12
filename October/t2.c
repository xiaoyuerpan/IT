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
 #include<stdio.h>
 #include<math.h>
int main()
{
	float x,y;
	int flag;
	scanf("%f",&x);
	flag=(x>=0 && x<2)?1:(x<6)?2:(x<10)?3:4;
	switch(flag)
	{
		case 1: y=x; break;
		case 2: y=x*x+1;break;
		case 3: y=sqrt(x+1);break;
		default : y=1/(x+1);break;
	}
	printf("y=%f\n",y);
	return 0;
 } 
