//print the multiplication of odd numbers 
#include<stdio.h>
#include<conio.h>
void main()
{int i,no,mul=1;
 printf ("enter the no you want to multiply:");
 scanf ("%d",&no);
     for(i=1;i<=no;i++)
  { if(i%2!=0)
     mul=i*mul;
      }
 printf ("the multiplication  is %d",mul);
 getch();
  }
