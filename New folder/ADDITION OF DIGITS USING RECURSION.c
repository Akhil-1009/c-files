#include<stdio.h>
#include<conio.h>
int sum(int);
void main()
{int no,s;
printf("enter the no");
scanf("%d",&no);
s=sum(no);
printf("the sum is %d",s);
getch();

}
int sum(int p)
{int s,digit;
if(p==0)
return 0;
digit=p%10;
s=digit+sum(p/10);
return s;
}

