#include<stdio.h>
#include<conio.h>
void main()
{int sp,cp,profit,loss;
 printf ("enter the sp:");
 scanf ("%d",&sp);
 printf ("enter the cp:");
 scanf ("%d",&cp);
 if (sp>cp)
 {printf ("\nprofit");
  profit=sp-cp;
  printf ("\nprofit=%d",profit);
 }
 else
 {printf ("\nloss");
   loss=cp-sp;
   printf ("\nloss=%d",loss);
   getch();
   }
}
