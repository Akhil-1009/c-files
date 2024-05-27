#include<stdio.h>
#include<conio.h>
void main()
{int no,rem,revno,i=0,newno=0;
 printf ("enter the five digit no");
 scanf ("%d",&no);
 while(no!=0)
 {
 rem=no%10;
 rem=rem+1;
 i=i*10+rem;
 no=no/10;
 }
 while (i!=0)
 {rem=i%10;
 newno=newno*10+rem;
 i=i/10;
    }
    printf ("the new no is %d",newno );
    getch();
 
 

}
