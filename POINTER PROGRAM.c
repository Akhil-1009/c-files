#include<stdio.h>
#include<conio.h>
void main()
{int p,*a,**b,***c;
 p=6;
 a=&p;
 b=&a;
  c=&b;
  
 
 //p=&c;
 //*p=8;
 printf("the address of p is %d",a);
 printf("\n the addres of a is %d",b);
 printf("the address of b is %d",c);
 printf("the value of p is  %d",***c);
 getch();

}
