#include<stdio.h>
#include<conio.h>
void main()
{int no,i,rem,temp,sum;
 printf ("enter the no ");
 scanf ("%d",&no);
 temp=no;
 while(no!=0)
{
  rem=no%10;
 i=i*10+rem;
 no=no/10;
  }
  sum=(i%10)+(temp%10);
  printf ("the sum of first and last no is %d",sum);
  getch();
  }
