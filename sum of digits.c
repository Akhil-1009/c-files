#include<stdio.h>
#include<conio.h>
void main()
{int no,sum=0,digit;
 printf ("enter the no");
 scanf ("%d",&no);
 while(no!=0)
 {digit=no%10;
  sum=sum+digit;
  no=no/10;
  } 
  printf ("sum of digits is %d",sum);
  getch();
  
  }
