//reverse right angle triangle
#include<stdio.h>
#include<conio.h>
void main()
{int i,j,rows;
 printf ("enter the no of rows");
 scanf ("%d",&rows);
 for(i=1;i<=rows;i++)
 {for(j=1;j<=rows;j++)
  {if(j>=i)
  printf ("*");
  else
  printf (" ");
    }
  printf ("\n");
   }
   getch();
   
}

