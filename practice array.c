#include<stdio.h>
#include<conio.h>
void main()
{int a[6],sum=0,i;
float avg;
 printf ("enter the six no  ");
 for(i=0;i<=5;i++)
 {
 scanf ("%d",&a[i]);
 sum=sum+a[i];
   }
 avg=sum/6.0;
 printf ("average is %f",avg);  
 
  
}
