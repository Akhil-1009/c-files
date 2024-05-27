#include<stdio.h>
#include<conio.h>
void main()
{int i,count=0,count1=0,count2=0,a[100],no;
 printf("enter the no of array elements");
 scanf("%d",&no);
 printf("enter the array elements ");
 for(i=0;i<no;i++)
 scanf("%d",&a[i]);
 for(i=0;i<no;i++)
 {if(a[i]>0)
 {
 
  count++;
  printf("\npositive num=%d",a[i]);
}
  if(a[i]<0)
 {
   count1++;
   printf("\n negativenum=%d",a[i]);
 }
  if(a[i]==0)
  {
  count2++;
  printf("\n zeroe=%d",a[i]);
  }
  
 }
 printf ("\nthe no of positive number is %d",count);
 printf("\nnegative numbers is %d",count1);
 printf("\nzeroes are%d",count2);
 getch();
}
