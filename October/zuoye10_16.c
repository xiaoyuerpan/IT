/*1,����1����λ�������λ���ֵ�ƽ����
���� 1234�����30��*/
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
//  else  printf("�������\n");	
//  return 0;
//}
//2
//#include<stdio.h> 
//int main()
//{
//	int i,j;
//	/*����*/
//	for(i=1;i<=4;i++)
//	{
//		for(j=1;j<=4-i;j++)	//��ӡ�ո�
//		{	
//		printf(" ");	
//		}
//		for(j=1;j<=2*i-1;j++)//��ӡ*
//		{	
//		printf("*");	
//		}
//	printf("\n");		
//	}
//		/*����*/
//	for(i=2;i<=4;i++)
//	{
//		for(j=1;j<=i-1;j++)	//��ӡ�ո�
//		{	
//		printf(" ");	
//		}
//		for(j=1;j<=7-2*(i-1);j++)//��ӡ*
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
///*����*/
//	for(i=0;i<5;i++)
//	{
///*����*/
//	  for(j=0;j<4-i;j++)
//	  {
//	  	printf(" ");
//	  }
//	  	printf("*");
///*����*/
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
///*x����*/
//	for(i=3;i>=0;i--)
//	{
///*����*/
//	  for(j=0;j<4-i;j++)
//	  {
//	  	printf(" ");
//	  }
//	  	printf("*");
///*����*/
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
//		/*���*/
//	  for(j=0;j<5-i-1;j++)//�ո� 
//	  {
//	  	printf(" ");
//	  }
//	  for(j=1;j<=i+1;j++)//���� 
//	  {
//	  	printf("%d",j);
//	  }
//	  
//	  /*�ұ�*/
//	  for(j=i;j>0;j--)//���� 
//	  {
//	  	printf("%d",j);
//	  }
//	  for(j=0;j<5-i-1;j++)//�ո� 
//	  {
//	  	printf(" ");
//	  } 
//	 printf("\n") ;  
//	}
///*----------------------------------------*/	
//	//���� 
//	for(i=4;i>=0;i--)
//	{
//		/*���*/
//	  for(j=0;j<5-i-1;j++)//�ո� 
//	  {
//	  	printf(" ");
//	  }
//	  for(j=1;j<=i+1;j++)//���� 
//	  {
//	  	printf("%d",j);
//	  }
//	  
//	  /*�ұ�*/
//	  for(j=i;j>0;j--)//���� 
//	  {
//	  	printf("%d",j);
//	  }
//	  for(j=0;j<5-i-1;j++)//�ո� 
//	  {
//	  	printf(" ");
//	  } 
//	 printf("\n") ;  
//	}
//	return 0;
//}
//5,  S = n+nn+nnn+nnnn+������ֵ��Ҫ�����̨����Ҫ�ӵ���n=1�ͼӵĸ���count=3
//123
//#include<stdio.h> 
//int main()
//{
//	int count;
//	long long  n,sum=0;
//	int i,t,j;
//	printf("����n�ͼӵĸ���count\n"); 
//	scanf("%lld %ld",&n,&count);
//	t=n;
//	j=10;
//	//�ж�n�Ǽ�λ��
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
//6��������������Ϊ����������һ������˫��̥���������100��200֮�������˫��̥������
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
//	  	 flag1=1;//n��������
//		 break;	
//	    } 
//   }
//	  if(flag1==0)//n������ 
//	  {
//	   m=n+2;//�ж�m�ǲ�������
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
//7����һ���ֵ��������ӵ���ϣ������������ӣ���
//�磺15=1*15 ��15=3*5���ܳ����ظ���
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
//��һ���������ֽ������������磺����90,��ӡ��90=2*3*3*5�� 
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
/*9���ǰ�ֻ��������2��3��5��������������Ugly Number��������6��8���ǳ�����
��14���ǣ���Ϊ����������7��ϰ�������ǰ�1�����ǵ�һ��������
�󰴴�С�����˳��ĵ�100��������*/
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
//1000����ĩβ�м���0  ->
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
