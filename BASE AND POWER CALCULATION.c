#include<stdio.h>
#include<conio.h>
void main()
{int b,i,p,result=1;
printf ("enter the base and power \n");
scanf("%d%d",&b,&p);
for(i=1;i<=p;i++)
 result=result*b;
 printf ("result is %d",result);
 getch();
}
