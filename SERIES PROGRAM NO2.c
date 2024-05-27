#include<stdio.h>
#include<conio.h>
void main()
{int i,n,j;
 float sum=0.0,fact=1.0;
 printf ("enter the last term of series");
 scanf ("%d",&n);
 for(i=1;i<=n;i++)
 {for(j=1;j<=i;j++)
 fact=fact*j;
 sum=sum+(i/fact);
 }
 printf ("S=%f",sum);
 getch();
}
