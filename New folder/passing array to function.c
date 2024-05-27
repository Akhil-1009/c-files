#include<stdio.h>
#include<conio.h>
void sum(int s[]);
void main()
{int a[20],i;
printf("enter the size of array");
for(i=1;i<=5;i++)
scanf("%d",&a[i]);
sum(a);
for (i=1;i<=5;i++)
printf("%d",a[i]);
getch();

 
}
void sum(int k[])
{int i; 
for(i=1;i<=5;i++)
k[i]=k[i]+1;



}
