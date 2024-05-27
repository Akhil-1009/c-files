#include<stdio.h>
#include<conio.h>
void main()
{char c;
 printf("enter the value of character ");
 scanf (" %c",&c);
 c>=48&&c<=57||c>=65&&c<=90||c>=90&&c<=122?printf("enter char is not special symbol"):printf ("enter char is a special symbol");
 getch(); 
}
