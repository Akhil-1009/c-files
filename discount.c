#include<stdio.h>
#include<conio.h>
void main()
{int q,rate;
 float total;
  printf ("enter the quantity");
  scanf ("%d",&q);
  printf ("\nenter the price per item");
  scanf ("%d",&rate);
      if (q>1000)
      {
	  total=(q*rate)-q*rate*.10;
        printf ("%f is total amount",total);
        }
      else
	    { total=(q*rate);
	     printf ("%f is total amount",total);
		  }  
	 getch();   
}
