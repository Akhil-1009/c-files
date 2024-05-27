//print the multiplication of n numbers 
#include<stdio.h>
#include<conio.h>
void main()
{int i=1,no,mul=1;
 printf ("enter the no you want to multiply");
 scanf ("%d",&no);
     while(i<=no)
 { mul=mul*i;
      i++;
     }
 printf ("the multiplication of %d no is %d",no,mul);
 getch();
}
