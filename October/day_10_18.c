//#include <stdio.h>
//int main()
//{
//	int i = 2,j = 5,k = 3;
//	int a=i&&j>=k;
//	printf("%d\n",a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//void foo(void)
//{
//    unsigned int a = 6;
//    int b = -20; 
//    (a+b > 6) ? puts("> 6") : puts("<= 6");
//}
//}
//  #include <stdio.h>
//   main( )
//   {
// char ch;   long number=0;
//       while((ch=getchar( ))<'0'|| ch>'6') ;
//          while(ch!='?'&&ch>='0'&&ch<='6') { //2 4 0
//             number=number*7+ch-'0';
//             printf("%ld#",number);
//             ch=getchar( );
//           }
//}
// #include <stdio.h>
//   main()
//   {
// int i,j;
//        for(i=1; i<5; i++)
//        for(j=2; j<=i; j++) putchar('#') ;
//   }
// #include <stdio.h>
//int   main()
//   {
//   	int k, s;
//         for(k=0, s=0; k<10; k++)
//           if (s>k) break; 
//           else s += k; 
//          printf("k=%d,s=%d", k, s);
//   }


//printf("%d %d %d\n",a++,a++,++a);
//#include <stdio.h>
//int  main()
//{
//	int a = 5;
//	printf("%d %d %d\n",a++,a++,++a);
//	return 0;
//}
//#include <stdio.h>
//int  main()
//{
// int num,i;
// printf("������һ��������");
// scanf("%d",&num);
// if(num>=1)
// {
// for(i = 2; i < num; i ++) 
// {
//  if(num % i == 0)
//   {
//   printf("%d����һ������\n",num);
//   break;
//  }
// }
//  if(num==i)
//  {
//  	printf("%d��һ������\n",num);
//  }	
//  if(num==1)
//  {
//  	printf("%d����һ������\n",num);
//  }
// }
// else 
// {
// 	printf("%d����һ������\n",num);
// } 
//}



//���ӣ���һ���Ѿ��ź�������顣
//������һ������Ҫ��ԭ���Ĺ��ɽ�������������
//#include<stdio.h>
//int main()
//{
//int a[11]={1,4,6,9,13,16,19,28,40,100};
//int temp1,temp2,number,end,i,j;
//printf("original array is:\n");
//for(i=0;i<10;i++)
//printf("%5d",a[i]);
//printf("\n");
//printf("insert a new number:");
//scanf("%d",&number);//5
//end=a[9];
//if(number>end)
//a[10]=number;
//else
//{
//for(i=0;i<10;i++)
//{ if(a[i]>number)
//{temp1=a[i];
//a[i]=number;
//for(j=i+1;j<11;j++)
//{temp2=a[j];
//a[j]=temp1;
//temp1=temp2;
//}
//break;
//}
//}
//}
//for(i=0;i<11;i++)
//printf("%6d",a[i]);
//return 0;	
//}

//4�������������飬����ϲ�Ϊһ�������
//��������Ȼ���ֵ���,�������¿����µĿռ�(����ʹ������)

/*
�������������飬����ϲ�Ϊһ���������������Ȼ���ֵ���,�������¿����µĿռ�(����ʹ������)
*/ 
//#include <stdio.h> 
//int main()
//{
// int a[15] = {8,15,24,35,46,65,232};
// int b[8] = {1,2,4,15,65,68,276,345};
// int asize = 7;
// int i = 0,j = 0,k = 0;
// for(i = 0;i < 8;i++)//ȡb�е�һ��Ԫ�� 
// {
//  for(j = 0;j < asize;j++)//ȡa������Ԫ�� 
//  {
//   if(b[i] < a[j])//��ÿһ��a��Ԫ�رȽ� 
//   {
//    break;//j����1����λ�� 
//   }
//  }
//  for(k = asize;k > j;k--)//����Ųһ�� 
//  {
//   a[k] = a[k - 1]; //����Ųһ�� 
//  } 
//  a[k] = b[i];//��ֵ��a[k] 
//  asize++; 
// }
// //��ӡ 
// for(k = 0;k < asize;k++)
// {
//  printf("%d ",a[k]);
// }
// printf("\n");
// return 0;
//}
//#include <stdio.h>
//int  main()
//{
//   	int a[15]={85,45,56,23,12,5,98};
//	int b[8]={78,14,12,6,9,53,29};
//	int asize=7;
//	int bsize=sizeof(b)/sizeof(b[0]);
//	int i,j,k;
//	for(i=0;i<bsize;i++)//ȡb������Ԫ��
//	{
//		//b��һ�����Ƚ�
//	for(j=0;j<asize;j++) //ȡa������Ԫ��	
//	{
//	  if(b[i]<a[j]) //С->�ҵ��Ǳ�j	->j����1����λ�� 
//	   {
//	   	break; 
//	   }
//    }
//	   //����Ųһ��	->������浹��Ų 
//	for(k=asize;k>j;k--)
//	{
//	   	a[k]=a[k-1];	
//	}
//		a[k]=b[i]; 
//		asize++;		
//	}
//	 for(k = 0;k < asize;k++)
//	{
//		printf("%d ",a[k]);
//	}
//		printf("\n");	
//   	return 0;
//}
//����
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//   int val;
//   char str[20]= "xh820xydfg";
//   val = atoi(str);
//   printf("�ַ���ֵ = %s, ����ֵ = %d\n", str, val);
//
//   char a[20]="runoob.com";
//   val = atoi(a);
//   printf("�ַ���ֵ = %s, ����ֵ = %d\n", a, val);
//   return(0);
//}

//2��һ����ά����Խǻ���
//#include <stdio.h>
//int  main()
//{
//   	int a[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
//   	int i,j;
//   	int t,k=4;
//   	//���ɣ�a00->a33���м�3��a01->a23 ��2  1  0 
//   	//��i�м�3 2 1 0
//	//��j�м�3 2 1 0 
//   	for(i=0;i<4;i++)
//   	{
//   	for(j=0,k=3-i;j<3-i;j++,k--)//����	
//   	{
//   		t=a[i][j];
//   	a[i][j]=a[i+k][j+k];
//   	a[i+k][k+j]=t;
//	}
//    } 
//    //��ӡ 
//   	for(i=0;i<4;i++)
//   	{
//   	for(j=0;j<4;j++)	
//   	{
//   	printf("%-2d ",a[i][j]);	
//	}
//	printf("\n");	
//    } 
//   	return 0;
//}
//#include<stdio.h> 
//int main() 
//{
//  int i,j;
//  int a[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16}; 
//  for(i=0;i<4;i++) 
//  {
//    for(j=0;j<4-i;j++) 
//    {
//  int tmp = a[j][i];
//     a[j][i]=a[3-i][3-j];
//  a[3-i][3-j] = tmp; 
//    }
//  }
//  for(i=0;i<4;i++) 
//  {
//    for(j=0;j<4;j++) 
//    {
//      printf("%6d",a[i][j]);
//    }
//  printf("\n");
//  }
//  return 0;
//
//}


//3���ڵ�Ӣ�İ���a-z��˳���������
//#include <stdio.h>
//#include <string.h>
//int  main()
//{
//	//char a[7]={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
//   	int i,j,t;
//   	char a[43]="week";
//   	int len=strlen(a);
//   	for(i=0;i<len-1;i++)
//   	{
//   		for(j=0;j<len-1-i;j++)
//   		{
//   			if(a[i]>a[i+1]) 
//   		{
//   		t=a[i];a[i]=a[i+1];a[i+1]=t;	
//		}	
//		}
//	}
//	printf("%s",a); 	
//   	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int  main()
//{
//	char a[7][10]={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
//   	int i,j;
//   	char t[32];
//   	for(i=0;i<7;i++)//ð������ 
//   	{
//   		for(j=0;j<6-i;j++)//6-i->   �Ƚ�5�� 
//   		{
//   		//���� 
//   			if(strcmp(a[j],a[j+1])>0)
//   		{
//   			strcpy(t,a[j]);
//   			strcpy(a[j],a[j+1]);
//   			strcpy(a[j+1],t);
//		}
//		}
//	}  
//   	for(i=0;i<7;i++)
//	 {
//	 printf("%s\n",a[i]);
//	 }  	
//   	return 0;
//}
//4����һ���ַ�����ɾ���������е�'a'�ַ�
//   "assfdasfdaefewfaafgffaaaa"  ==>>>  "ssfdsfdefewffgff"

//#include <stdio.h>
//#include <string.h>
//int  main()
//{ 
//      //char arr[45];
//	//gets(arr); 
//   	char arr[45]="assfdasfdaefewfaafgffaaaass";
//   	int i,j=0;
//   	int len=strlen(arr);
//     for(i=0;i<len && arr!='\0';i++)
//     {
//     	if(arr[i]!='a')
//     	{
//     	arr[j]=arr[i];
//		j++;	
//		}
//	 }
//	 arr[j]='\0';
//	 printf("%s",arr);	 
//   	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int  main()
//{
//   	return 0;
//}
//5,�����һ���ַ�����ǰ N�����ַ��͵�һ���ַ���������ȥ�� 
//Ȼ���ټ���һ������0����������ʹ��strcpy(str1,str2,n)��������
//#include <stdio.h>
//int  main()
//{
//int i,N=5;
//char s1[50]="ab3dastyu",s2[100];
//gets(s1);
//scanf("%d",&N);
//for(i=0;i<N && s1!='\0';i++)
//{
//	s2[i]=s1[i];
//}
//s2[N]='\0';
//printf("%s",s2);
//return 0;
//}
//#include <stdio.h>
//int  main()
//{
//   	
//   	return 0;
//}
//#include <stdio.h>
//int  main()
//{
//   	
//   	return 0;
//}//#include <stdio.h>
//int  main()
//{
//   	
//   	return 0;
//}//#include <stdio.h>
//int  main()
//{
//   	
//   	return 0;
//}//#include <stdio.h>
//int  main()
//{
//   	
//   	return 0;
//}//#include <stdio.h>
//int  main()
//{
//   	
//   	return 0;
//}//#include <stdio.h>
//int  main()
//{
//   	
//   	return 0;
//}//#include <stdio.h>
//int  main()
//{
//   	
//   	return 0;
//}
//#include <stdio.h>
//int  main()
//{
//   	
//   	return 0;
//}
//#include <stdio.h>
//int  main()
//{
//   	
//   	return 0;
//}
//#include <stdio.h>
//int  main()
//{
//   	
//   	return 0;
//}
//#include <stdio.h>
//int  main()
//{
//   	
//   	return 0;
//}
//#include <stdio.h>
//int  main()
//{
//   	
//   	return 0;
//}
//#include <stdio.h>
//int  main()
//{
//   	
//   	return 0;
//}
//#include <stdio.h>
//int  main()
//{
//   	
//   	return 0;
//}
//#include <stdio.h>
//int  main()
//{
//   	
//   	return 0;
//}




