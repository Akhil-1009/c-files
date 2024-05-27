#include<stdio.h>
#include<conio.h>
void main()
{int a[20],*p,i;
 p=a;
 printf("the address of 0th elements is %d",a);
 printf("enter the elements of array\n");
 for(i=0;i<6;i++)
 scanf("%d",p+i);
 for(i=0;i<6;i++)
 printf("%d ",*(p+i));
 getch();
  }
