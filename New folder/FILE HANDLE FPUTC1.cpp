#include<stdio.h>
#include<conio.h>
void main()
{int i;
char s[20];
file *fp;
printf("enter the string");
gets(s);
fp=fopen("fnew.txt","w");
if(fp==NULL){

printf("file not found");
 exit(1);}
 for(i=0;i<strlen(s);i++)
 fputc(s[i],fp);
 fclose(fp);
 getch()
}
