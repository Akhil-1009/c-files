// sum of first n even no
#include<stdio.h>
#include<conio.h>
void main()
{int i,no,sum=0;
 printf ("enter the no you want to sum");
 scanf ("%d",&no);
 for(i=1;i<=no;i++)         // entry of loop
{ if (i%2==0)      
   sum=sum+i;
 
   }                       //exit of loop
   printf ("sum of even no is %d",sum);
  getch();
   
 }
