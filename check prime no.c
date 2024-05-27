#include<stdio.h>
#include<conio.h>
void main()
{int no,i;
 printf ("enter the no ");
 scanf ("%d",&no);
 for(i=2;i<=no-1;i++)
 {if(no%i==0)
  break;
 }
 if(i==no)
 printf ("%d is a prime number",no);
 else 
 printf ("%d is not a prime number",no);
 getch();
}
