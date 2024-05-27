#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{int no,s;
printf("enter the number ");
scanf("%d",&no);
s=fact(no);
printf("factorial of %d is %d",no,s);
getch();
 
}
int fact(int p)
{int mul;
if(p==1)
return p;
mul=p*fact(p-1);
return mul;
}
