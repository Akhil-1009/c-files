#include<stdio.h>
#include<conio.h>
void sum(int ,int);
void main()
{int n1,n2;
printf("enter two numbers ");
scanf("%d%d",&n1,&n2);
sum(n1,n2);
getch();

}

void sum(int n3,int n4)
{int sum;
 sum=n3+n4;
 printf("the sum is %d ",sum);
 
}
