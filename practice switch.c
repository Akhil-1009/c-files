#include<stdio.h>
#include<conio.h>
void main()
{int n1,n2,result,i;
char op;
while(1)
{
printf ("enter the two no");
scanf ("%d%d",&n1,&n2);
printf ("enter the  operator");
scanf (" %c",&op);


switch(op)
{ case '+': result=n1+n2;
            printf ("the addition is %d",result);
            break;
  case '-':result=n1-n2;
           printf("substarction=%d",result);
		   break;
  case '*':result=n1*n2;
  		   printf ("multiplication=%d",result);
			break;
  case '%':result=n1%n2;
           printf ("modulo is %d",result);
		   break;
  case '/':result=n1/n2;
           printf ("divide is %d",result);
		   break;
  case '#':exit(0);		   
	default:printf ("you have entered wrong operator");
		   			  
    }
}
    getch();
}
