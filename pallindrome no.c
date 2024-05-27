#include<stdio.h>
#include<conio.h>
void main()
{int no,y=0,num,digit;
printf ("enter the number");
scanf ("%d",&no);
num=no;
while(no!=0)
{digit=no%10;
 y=y*10+digit;
 no=no/10;
 }
 if(num==y)
   printf ("enter number is pallindrome");
 else
    printf ("enter number is not pallindrome");   
 
 getch();

}
