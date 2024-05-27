#include<iostream>
#include<conio.h>
using namespace std;
class vol
{private :
	int r,l,b;
	float h;
	public:
		void volume(int a)
		
		{ 
		
		r=a;
		
		float volume=4*3.14*r*r*r/3.0;
		cout<<"\n the value of volume of sphere is"<<volume;
		}
		void volume(int p,int q,int r)
		
		{	
		l=p;
		b=q;
		h=r;
		float volume=l*b*h;
		cout<<"\n the volume of cuboid is "<<volume;
		
		}
		void volume()
		{float volume=3.14*r*r*h;
		cout<<"\n the volume of cylinder is "<<volume;
		
		}
		
};
int main()
{vol v1;
int a;
int p,q,r;
cout<<"\nenter the value of radius";
cin>>a;
v1.volume(a);
cout<<"\n enter the value of length bredth and height";
cin>>p>>q>>r;
v1.volume(p,q,r);
v1.volume();
getch();


}
