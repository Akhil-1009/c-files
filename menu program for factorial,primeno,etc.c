#include<stdio.h>
#include<conio.h>
void main()
{int choice,i,no,fact=1;
do
{system("cls");

printf ("!!menu");
printf ("\n1. factorial of number ");
printf ("\n2. check for prime number");
printf ("\n3.check for odd even number");
printf ("\n4.exit");
printf ("\nenter your choice");
scanf ("%d",&choice);
switch(choice)
{case 1:printf ("enter the number");
        scanf ("%d",&no);
        for(i=1;i<=no;i++)
       {fact=fact*i;}
        printf ("factorial of %d is %d",no,fact);
		break;
case 2:printf ("enter the number");
       scanf ("%d",&no);
	   for(i=2;i<=no-1;i++)
        {if(no%i==0)
       break;
          }
      if(i==no)
        printf ("%d is a prime number",no);
        else 
          printf ("%d is not a prime number",no);
		  break;		 
 case 3:printf ("enter the number ");
        scanf ("%d",&no);
		if(no%2==0)
		printf ("%d is a even number",no);
		else 
		printf ("%d is odd number",no);
		break;
case 4:printf ("exit !!good bye have a nice day");		       
		break;
default:printf ("you have entered wrong choice please enter the above choice");		
}
   getch();}
while(choice!=4);


}

