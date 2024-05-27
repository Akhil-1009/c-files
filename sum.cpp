#include<iostream>
#include<conio.h>
using namespace std;
class complex
{int real,imag;
public :
void setdata(int a,int b)
{real=a;
imag=b;
}
void display()
{
cout<<"\n"<<real<<"+i"<<imag;
}
complex sum(complex c)
{complex temp;
temp.real=real+c.real;
temp.imag=imag+c.imag;
return(temp);

}
};
int main()

{complex c1,c2,c3;
 c1.setdata(5,7);
 c2.setdata(2,3);
 
 cout<<"\n the first no is";
 c1.display();
 cout<<"\n second complex no is ";
 c2.display();
 c3=c1.sum(c2);
 cout<<"the sum is ";
 c3.display();
 getch();
}

