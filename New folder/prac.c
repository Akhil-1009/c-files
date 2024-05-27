#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{char str1[100],str2[100],str3[100];
 printf("enter the first string ");
 gets(str1);
 printf("enter the second string");
 gets(str2);
 
 printf("the result is %s",strcat(str2,str1));
 
 getch();
}
