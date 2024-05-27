#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void main()
{int i;
char ch[10];
FILE *fp;
fp=fopen("fnew.txt","r+");

if(fp==NULL)
{printf("file not found");
 exit(1);
}

while(!feof(fp))
{fgets(ch,8,fp);
printf("%s",ch);


 
 
}

fclose(fp);
getch();
}

