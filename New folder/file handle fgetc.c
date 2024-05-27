#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void main()
{int i;
char ch;
FILE *fp;
fp=fopen("fcopy.txt","r");

if(fp==NULL)
{printf("file not found");
 exit(1);
}
ch=fgetc(fp);
while(!feof(fp))
{printf("%c",ch);
 ch=fgetc(fp);
 
}
fclose(fp);
getch();
}

