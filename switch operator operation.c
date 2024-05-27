#include<stdio.h>
#include<conio.h>
void main()
{char ch;
 int n1,n2,sum,sub,mul,div,mod;
printf ("enter the character ");
scanf (" %c",&ch);
switch(ch)
{case '+':printf("enter the two numbers");
          scanf ("%d%d",&n1,&n2);
          sum=n1+n2;
           printf ("sum is %d",sum);
            break;
  case '-':printf("enter the two numbers");
           scanf ("%d%d",&n1,&n2);
           sub=n1-n2;
            printf ("sub is %d",sub);
            break;
  case '*':printf("enter the two numbers");
           scanf ("%d%d",&n1,&n2);
           mul=n1*n2;
            printf ("mul is %d",mul);
            break;
  case '%':printf("enter the two numbers");
            scanf ("%d%d",&n1,&n2);
           mod=n1%n2;
           printf ("mod is %d",mod);
            break;
  case '/':printf("enter the two numbers");
            scanf ("%d%d",&n1,&n2);
            div=n1/n2;
            printf ("div is %d",div);
           break;
 default:printf ("you have entered wrong operator please enter wright operater");								      
   }
   getch();
}
