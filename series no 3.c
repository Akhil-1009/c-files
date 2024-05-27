#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{int i,x1,x,n,sum=1;
printf ("enter the value of x");
scanf ("%d",&x);
printf ("enter the value of n");
scanf ("%d",&n);
for(i=1;i<=n;i++)
 {x1=pow(x,i);
 
 sum=sum+x1;}
 printf ("the sum is %d",sum);
 getch();
 
}
