#include<stdio.h>
#include<conio.h>
int sum(int *p);
void main()
{int no,z;
printf("enter the no");
scanf("%d",&no);
z=sum(&no);
printf("the sum of digits is %d ",z);
getch();

}
int sum(int *no)
{int sum=0,digit;
 
 while(*no!=0)
 {digit=*no%10;
  sum=sum+digit;
  *no=*no/10;
  }
  return(sum);
}
  

