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
	~complex ()
	{cout<<"\ndistructor called";
	
	}
	void display()
	{cout<<a<<"+i"<<b;
	
	}
	
	
};
int main()
{int a1,b1;
cout<<"\nenter two numbers ";
cin>>a1>>b1;
complex c(a1,b1);
c.display();
getch();
return 0;

}

