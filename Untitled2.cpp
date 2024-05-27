#include<iostream>
#include<conio.h>
using namespace std;
class sum
{int a;
public:
 void setdata(int p)
 {a=p;
 }
 sum operator+(sum p)
 {sum temp;
  temp.a=a+p.a;
  return (temp);
  
 
  } 
 void displaydata()
 { cout<<"\nthe sum is "<<a;
 }
};
int main()
{ sum d1,d2,d3;
d1.setdata(50);
d2.setdata(60);

 d3=d1+d2;
 d3.displaydata();
 getch();
 return 0;
}
