//first n odd and even no
#include<stdio.h>
#include<conio.h>
void main()
{int i=1,no;
printf ("enter the no you want to print:");
scanf ("%d",&no);
while (i<=no)
{ if (i%2==0) 
  printf ("even no=%d\n",i);
  else
    printf("oddno=%d\n",i);
    i++;}
getch();
}
