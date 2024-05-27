#include<stdio.h>
#include<conio.h>
void main()
{int n1,n2,n3,n4,n5,total;
 float per;
 printf ("enter the marks of five subjects");
 scanf ("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
 total=n1+n2+n3+n4+n5;
 per=total*0.2;
 printf ("per=%f",per);
  if (per>=60)
       printf ("\nfirst divison"); 
	 else if(per>=50)
        printf ("\nsecond divison"); 
   else if(per>=40)
        printf ("\nthird divison");
	 else
        printf ("\nfail");
     getch(); 
}
