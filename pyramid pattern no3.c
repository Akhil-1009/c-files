#include<stdio.h>
#include<conio.h>
void main()
{int no,i,j,k;
 system("cls");
 printf ("enter the no of rows ");
 scanf ("%d",&no);
 for(i=1;i<=no;i++)
 {for(j=1;j<=no-i;j++)
 {
 printf (" ");
 }
 for(k=1;k<=i;k++)
 {
 printf("%d ",i);
  }
  printf("\n");
  }
  getch();
}
