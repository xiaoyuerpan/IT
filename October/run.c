//����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿 
 int False(int year,int month,int day)
 {
 	if(month>12 ||day>31 ||month<0||day<0||month<0)
 	{
 		printf("������Ĳ��Ϸ�\n");
 		return 0;
	}
	else if((month==4 || month==6 ||month==9|| month==11)&&day==31)
 	{
 		printf("������Ĳ��Ϸ�\n");
 		return 0;
	}
	else if((month==1 || month==3 ||month==5|| month==7
	 || month==8|| month==10|| month==12)&&day==30)
 	{
 		printf("������Ĳ��Ϸ�\n");return 0;
	}
	else if(month==2 &&(day==30 ||day==31))
 	{
 		printf("������Ĳ��Ϸ�\n");return 0;
	}
	else if(!((year%4==0 && year%100!=0)||year%400==0)&&month==2 &&day==29)
		printf("������Ĳ��Ϸ�\n");return 0;
		//����2�²�������29 
 }
 int Year(int year)
{
	if(year%4==0)
	{
		if(year%100!=0)
		return 366;
		else return 365;
	}
 else  if(year%400==0)	
       return 366;
   else return 365;
}
int Month(int a,int x)
{
	if(x==1 || x==3 ||x==5 ||x==7 ||x==8 ||x==10 ||x==12)
	return 31;
	if(x==4 || x==6 ||x==9 ||x==11)
	return 30;
	if(a==366 && x==2) return 29;
	if(a==365 && x==2) return 28;
}
#include<stdio.h>
int main()
{
	int year,month,day;
	int sum=0,day1;
	int i,a;
	scanf("%d %d %d",&year,&month,&day);
  //�жϷǷ����� 
  if( False(year,month,day)!=0)
  {
  	 //�ж�year�Ƿ�Ϊ����366 ƽ��365 
    a=Year(year);  	  
   for(i=1;i<month;i++)
   {
      day1=Month(a,i);//�ж�month����29 ƽ��28 ÿ�µ����� 
   	   sum+=day1; 
    }
    sum=sum+day;//�ܼ� 
   printf("%d��%d��%d���������%d��\n",year,month,day,sum);	
  } 
  return 0;	
} 
