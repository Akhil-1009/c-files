#include<stdio.h>
#include<conio.h>
void main()
{ int a,b;
  printf ("enter the value of a");
  scanf ("%d",&a);
  printf ("\n enter the value of b");
  scanf ("%d",&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf ("a=%d b=%d",a,b);
  getch();
    }
