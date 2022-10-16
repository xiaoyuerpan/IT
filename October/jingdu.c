#include <stdio.h>
#include <stdlib.h> 
void Go19(float num)
{
float n=1;
float J1=2*n *(2*n+2)/(2*n+1)/(2*n+1); 
float J2=2*n*(2*n+2)/(2*n+1)/(2*n+1); 
do{
n=n+1;
J1=J2;
J2*=2*n*(2*n+2)/(2*n+1)/(2*n+1);
} 
while (J1-J2>num);
printf("½á¹ûÊÇ%f\n",J1);
}
int main()
{
Go19(0.1); 
Go19(0.01); 
Go19(0.001); 
Go19(0.0001); 
Go19(0.00001); 
system("pause");
return 0;
}
