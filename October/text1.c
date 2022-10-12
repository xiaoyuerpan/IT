//#include <stdio.h> 
//int main()
//{
//	float a=12.345;
//	int b=5;
//    float c=a/b; //将指数位x-127给int高字节了   IEEE754原则 
//int a=5;int b=2;
//int c=a/b;
//	printf("%d",c);
//	int val=14;
//	int c=(val++);
//	printf("%d\n",val);//15
//	printf("%d\n",c);//14
	
//	int a=10;//
//	printf("%d %d %d %d %d %d %d %d",a++,a,++a,++a,a,a++,++a,a++);
//int a=234,b=-521;
//printf("%d\n",a&b);
// printf("%d\n",a|b);
// printf("%d\n",a^b);
// printf("%d\n",~a);
// printf("%d\n",~b);
// printf("%d\n",b<<3);
// printf("%d\n",b>>3);
//	return 0;	
//}

//将一个数的第3位到第5位颠倒顺序
//例：100011 100  --> 100110100
//
//#include<stdio.h>
//int main()
//{
//  float c,k,f;
//  scanf("%f",&f); 
//  c= (f-32) ;      
//  k=273.16+c ;       
//printf("c=%f\n",c);
//printf("k=%f\n",k);
//	return 0;
//}
//2．	写一个程序把极坐标(r,θ) (θ之单位为度)转换为直角坐标( X,Y)。转换公式是:
//        x=r.cosθ
//        y=r.sinθ
//    测试数据:① r=10  θ=45°
////             ② r=20  θ=90°
//#include<stdio.h>
//#include<math.h>
//#define PI 3.1415926
//int main()
// {
// 	float r,x,y,o;
// 	scanf("%f %f",&r,&o);
// 	x=r*sin(o*PI/180);y=r*cos(o*PI/180);
// 	printf("x=%f,y=%f",x,y);
// 	return 0;
// }
//name         number     math      english    computer
//zhanghua     9901      80.50         87.0    80
//lina         9902      70.00         80.0    90
//wanggang     9903      87.00         76.0    78 

//#include<stdio.h>
//int main()
// {
// 	printf("name         number     math      english    computer\n");
// 		printf("zhanghua     9901      80.50         87.0    80\n");
// 	printf("lina         9902      70.00         80.0    90\n");
//	 printf("wanggang     9903      87.00         76.0    78 \n");	
// 	return 0;
// }
//#include<stdio.h>
//int main()
// {
// 	int num = 10;
//	char str = 't';
//	short val1 = 34;
//	double tmp = 23.4567;
//	
//	printf("sizeof(num) = %d\n",sizeof(num));
//	printf("sizeof(str) = %d\n",sizeof(str));
//	printf("sizeof(val1) = %d\n",sizeof(val1));
//	printf("sizeof(tmp) = %d\n",sizeof(tmp));
//	printf("----------------------------------\n");
//	printf("sizeof('h') = %d\n",sizeof('h'));//由于字符在一定范围内可以和ASCII值互换，所以计算字符常量大小按照整型计算 
//	printf("sizeof(234) = %d\n",sizeof(234));
//	printf("----------------------------------\n");
//	printf("sizeof(float) = %d\n",sizeof(float));
//	printf("sizeof(double) = %d\n",sizeof(double));
// 	return 0;
// }
//#include<stdio.h>
//int main()
// {
// 	
// 	return 0;
// }

//#include<stdio.h>
//int main()
// {
// 	//除法运算 
//	int val1 = 14,val2 = 5;
//	int sum1 = val1 / val2;
//	float sum2 = val1 / val2;
//	
//	printf("sum2 = %f\n",sum2);
//	
//	float num1 = 12.345;
//	
//	float tmp1 = num1 / val2;
//	printf("tmp1 = %f\n",tmp1);
//	
//	//取余运算 
//	//float tmp2 = num1 % val2; //错 
//	//printf("tmp2 = %f\n",tmp2); 
//	
//	int tmp2 = val1 % val2;
//	printf("tmp2 = %d\n",tmp2);
//	
//	//++操作 
//	//val1++;
//	//++val1;
//	//int tmp3 = val1++;//tmp3 = val1,val1 = val1 + 1
//	//int tmp3 = ++val1;//val1 = val1 + 1，tmp3= val1 
//	//printf("val1 = %d\n",val1);
//	//printf("tmp3 = %d\n",tmp3); 
//	
//	int tmp3 = (++val1);
//	printf("val1 = %d\n",val1);
//	printf("tmp3 = %d\n",tmp3); 
// 	return 0;
// }
//
//#include<stdio.h>
//int main()
// {
//// 	int a = 32768;
////	printf("a = %hd\n",a);
////	unsigned char a = 253;
////	printf("a = %hd\n",a);
//	
////	short a = 128;
////	char b = a;
////	printf("b = %d\n",b);
//
// 	return 0;
// }
//#include<stdio.h>
//int main()
// {
// 	
// 	return 0;
// }

//#include<stdio.h>
//#define ADD(a,b) { int c; c=a>b?b:a;printf("%d",c);}
//int main()
// {
// 	int a,b;
// 	scanf("%d %d",&a,&b);
// 	ADD(a,b);
// 	return 0;
// }
//str是否为小写字母，若为小写字母，将其改为大写字母；若为大写字母，将其改为小写字母；否则原样输出
//#include<stdio.h>
//int main()
// {
// 	char str,d;
// 	scanf("%c",&str);
// 	d=str>='a' && str<='z'?str-32: str>='A'&&str<='Z'?str+32:str;
// 	printf("%c\n",d);
// 	return 0;
// }
//将一个数的第3位到第5位颠倒顺序
//#include<stdio.h>
//int main()
// {
// 	int a;//0100 1011 0101=1205 
//	         // 0100  1001 1101=1181  
// 	int b,c,d,e;
// 	scanf("%d",&a);
// 	b=a&32;//x1xx2xxx&100000=x100000
// 	c=a&8;//&1000=0000x2000
// 	d=a-b-c;//0x0xxx
// 	
// 	b=b>>2;c=c<<2;
// 	e=d|b|c;//填空 
//   printf("e=%d\n",e);	
// 	return 0;
// }
//#include<stdio.h>
//int main()
// {
// 	
// 	return 0;
// }
//#include<stdio.h>
//int main()
// {
// 	
// 	return 0;
// }








