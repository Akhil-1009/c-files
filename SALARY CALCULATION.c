#include<stdio.h>
#include<conio.h>
void main()
{int sal;
float gr;
printf ("enter the salary ");
scanf ("%d",&sal);
if(sal<1500)
{gr=(sal*0.1)+sal+(sal*0.9);
 printf("the salary is %f",gr);
 
}
if(sal>=1500)
{gr=(sal*0.98)+500+sal;
printf("the salary is %f",gr);

}
getch();


}
