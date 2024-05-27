#include<stdio.h>
#include<conio.h>
int add(int,int);
int even();
void main()
{int x,y,s,p,k;
  printf("enter two numbers \n");
  scanf("%d%d",&x,&y);
 s=add(x,y);			
 printf("%d",s);
printf("\naddition done");
 p=add(x,y);
 printf("%d",p);
 k=even();
 printf("%d",k);
 getch();
 
}
int add(int a,int b)
{int c;
 c=a+b;
 
 return(c);
 
}
int even()
{int no;
printf ("enter a number ");
scanf("%d",&no);
if (no%2==0)
return 1;
}

