#include<stdio.h>
#include<conio.h>
void main()
{int curryear,joinyear,bonus=2500;
system("cls");
printf ("enter the year of joining ");
scanf("%d",&joinyear);
printf ("enter the current year");
scanf ("%d",&curryear);
  if (curryear-joinyear>=3)
    printf ("employee will get the bonus=%d",bonus);
     else
	  printf ("employee will not get bonus");
	  getch(); 
}
