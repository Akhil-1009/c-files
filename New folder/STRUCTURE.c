#include<stdio.h>
#include<conio.h>

struct date
{int d,m,y;
 };
void main()
{

 struct date b1;
 printf("enter the date ");
 scanf("%d%d%d",&b1.d,&b1.m,&b1.y);
 printf("\n%d %d %d",b1.d,b1.m,b1.y);
 getch();
}

