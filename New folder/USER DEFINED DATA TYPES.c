#include<stdio.h>
#include<conio.h>
void enu(void );
enum example
{jan,feb=6,march,april,may
};
union marks
{int m,s,b;
};
void main()
{union marks s2;
 s2.m=6;
 s2.s=7;
 s2.b=9;
 printf("%d\n",s2.m);
  printf("%d\n",s2.s);
   printf("%d\n",s2.b); 
    enu();

getch();

}
//feb=6;
void enu()
{printf("\n%d",feb);
printf("\n%d",may);
 printf("\n%d",jan);
}


