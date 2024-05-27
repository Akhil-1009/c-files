#include<stdio.h>
#include<conio.h>
void main()
{int no,y=0,digit;
printf ("enter the number");
scanf ("%d",&no);
while(no!=0)
{digit=no%10;
 y=y*10+digit;
 no=no/10;
 } 
 printf("reverse number is %d",y);
 getch();

}
