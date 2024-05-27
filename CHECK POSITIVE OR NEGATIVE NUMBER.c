#include<stdio.h>
#include<conio.h>
void main()
{int no;
printf ("enter the no ");
scanf ("%d",&no);
if(no>0)
printf("%d is a positive number ",no);
else if(no<0)
printf("%d is a negative number",no);
else if(no==0)
printf("%d is zero",no);
getch();


}
