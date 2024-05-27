#include<stdio.h>
#include<conio.h>
void main()
{int a,b;
 float x,y;
 printf ("enter the value of a");
 scanf ("%d",&a);
 printf ("enter the value of b");
 scanf ("%d",&b);
 x=a*a+b*b+2*a*b;
 printf ("x=%f",x);
 y=a*a*a+b*b*b+3*a*a*b+3*a*b*b;
 printf ("y=%f",y);
 getch();
}
