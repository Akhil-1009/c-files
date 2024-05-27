#include<stdio.h>
#include<conio.h>
void main()
{int u,l,i,j;
printf ("enter the upper and lower limit ");
scanf ("%d%d",&u,&l);
for(i=u+1;i<l;i++)
{for(j=2;j<i;j++)
 if(i%j==0)
 break;
 if(i==j)
 printf("%d ",i);
 
}
getch();

}
