#include<stdio.h>
#include<conio.h>
void main()
{int i,n,sum=0;
 printf ("enter the last term of series");
 scanf ("%d",&n);
 for(i=1;i<=n;i++)
 {sum=sum+(i*(i+1));
 }
 printf ("S=%d",sum);
 getch();
}
