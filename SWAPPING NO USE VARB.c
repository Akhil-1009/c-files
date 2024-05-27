#include<stdio.h>
#include<conio.h>
void main()
{ int a,b,temp;
  printf ("enter the value of a");
  scanf ("%d",&a);
  printf ("\n enter the value of b");
  scanf ("%d",&b);
  temp=a;
  a=b;
  b=temp;
  printf ("a=%d b=%d",a,b);
  getch();
    }
