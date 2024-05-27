#include<stdio.h>
#include<conio.h>
void main()
{int no,firstno,lastno,temp,sum;
printf ("enter the number");
scanf ("%d",&no);
temp=no;
lastno=no%10;
while(no/10!=0)
 no=no/10;
sum=no+lastno;
printf ("sum of first and last no is %d",sum);
getch();

}
