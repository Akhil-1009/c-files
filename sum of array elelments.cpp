#include<iostream>
#include<conio.h>
using namespace std;
int main()
{int i,size,c[20];
cout<<"enter the size of array";
cin>>size;
int sum=0;
for(i=0;i<size;i++)
cin>>c[i];
for(i=0;i<size;i++)
{sum=sum+c[i];

}
cout<<"the sum of array elements is "<<sum;
getch();

}
