#include<iostream>
#include<conio.h>
using namespace std;
class complex
{int real,imag;
public :
	
void set(float a,float b)
  {
  real=a;
imag=b;}

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

{complex c1;
 complex c2;
 complex c3;
 c1.set(5.0,4.0);
 c2.set(2.0,8.0);
 cout<<"\n the first no is";
 c1.display();
 cout<<"\n second complex no is ";
 c2.display();
 c3=c1.sum(c2);
 c3.display();
 getch();
}

