#include<stdio.h>
#include<conio.h>
void main()
{int a,b,c;
 printf ("enter the value of a");
 scanf ("%d",&a);
 printf ("\nenter the value of b");
 scanf ("%d",&b);
 printf ("enter the value of c");
 scanf ("%d",&c);
 if (a>b)
 {    if(a>c)
         printf ("%d is maximum number",a);
       else
	   printf ("%d is maximum number",c);  
      }
	else
	   {if (b>c)
	  printf ("%d is maximum number",b);
	     else
		printf ("%d is maximum number",c);  
		  }
	 getch();
}
		
		    
 
	
