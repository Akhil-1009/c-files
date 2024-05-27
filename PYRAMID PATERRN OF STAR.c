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
 for(k=1;k<=2*i-1;k++)
 {
 printf("*");
  }
  printf("\n");
  }
  getch();
}
