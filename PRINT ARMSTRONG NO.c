#include<stdio.h>
#include<conio.h>
void main()
{int u,l,i,temp,result,rem;
 printf("enter the  upper and lower limit ");
 scanf ("%d%d",&u,&l);
 for(i=u+1;i<l;i++)

{ temp=i;
  result=0;
  while(temp!=0)
  {
  rem=temp%10;
  result=result+rem*rem*rem;
  temp=temp/10;
    }
    if(i==result)
    printf("%d ",i);
  }
  getch();

}
