#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void main()
{int i;
char s[20];
FILE *fp;
printf("enter the string");
gets(s);
fp=fopen("fnew","w");
if(fp==NULL){

printf("file not found");
 exit(1);}
 for(i=0;i<strlen(s);i++)
 fputc(s[i],fp);
 fclose(fp);
 getch();
}
