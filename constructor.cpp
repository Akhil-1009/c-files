#include<iostream>
#include<conio.h>
using namespace std;
class complex
{int a,b;
public:
	complex (int n1,int n2)
	{a=n1;
	b=n2;
	
	}
	void display()
	{cout<<"\n"<<a<<"+i"<<b;
	
	}
	
};
int main()
{
/*cout<<"\nenter two numbers ";
cin>>a1>>b1;*/
complex c(5,7);
complex c1(2,4);

c.display();
c1.display();
getch();
return 0;

}

