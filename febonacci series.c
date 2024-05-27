#include<stdio.h>
#include<conio.h>
void main()
{int i,no,sum,prev1,prev2;
 printf ("enter the no upto series");
 scanf ("%d",&no);
 prev1=0;
 prev2=1;
 printf ("%d %d",prev1,prev2);
 for(i=1;i<=no-2;i++)
 {sum=prev1+prev2;
 printf("%d ",sum);
 prev1=prev2;
 prev2=sum;
 }
  getch();
 }
