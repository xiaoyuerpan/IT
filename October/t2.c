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
