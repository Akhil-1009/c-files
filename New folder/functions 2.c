#include<stdio.h>
#include<conio.h>
int sum(int);
void main()
{int no,z;
 printf("enter the no");
 scanf("%d",&no);
 z=sum(no);
 printf("sum is %d",z);
 getch();
 
}
int sum(int no)
{ int sum1,digit,s;
  if(no==0){
  
  s=0;
  return s;
}
digit=no%10;
no=no/10;
sum1=sum(no);
s=sum1+digit;
return s;

}
