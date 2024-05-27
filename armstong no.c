#include<stdio.h>
#include<conio.h>
void main()
{int num,originalno,rem,result=0;
 printf("enter a three digit no:");
 scanf ("%d",&num);
 originalno=num;
 while(originalno!=0)
 {
 
 rem=originalno%10;
 result+=rem*rem*rem;
 originalno=originalno/10;}
 if(result==num)
 printf ("%d is an armstrong no",num);
 else
 printf ("%d is not an armstrong no",num);
 getch();
  
}

