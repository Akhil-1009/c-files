#include<stdio.h>
#include<conio.h>
void main()
 { int no,i,tab;
  printf ("enter the no to print the table:");
  scanf  ("%d",&no);
  i=1;
  while (i<=10)
  {tab=no*i;
   printf ("tab:%d*%d=%d",no,i,tab);
     i++;}
  getch();
 }
