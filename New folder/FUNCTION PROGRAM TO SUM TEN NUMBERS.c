#include<stdio.h>
#include<conio.h>
int sum(int a[]);
void main()
{int a[100],i,s;
printf("enter ten numbers");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
s=sum(a);
printf("\n%d",s);
getch();

}
int sum(int p[1])
{int i,sum=0;
for(i=0;i<10;i++)
sum+=p[i];
return sum;
}
