#include<stdio.h>
#include<conio.h>
int natsum(int d);
 void main()
{int no,p;
 printf("enter the no upto sum");
 scanf("%d",&no);
 p=natsum(no);
 printf("sum of %d no is %d",no,p);
 getch();
 
}
int natsum(int a)
{int s;
if(a==0)
return a;
s=a+natsum(a-1);
return s;
}
