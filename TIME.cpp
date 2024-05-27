#include<iostream>
#include<conio.h>
using namespace std;
class time
{int hour,minute;
public:
	void setdata(int a,int b)
	{hour=a;
	minute=b;
	
	}
	void displaydata()
	{cout<<hour<<":"<<minute;
	
	}
	time sum(time t)
	{time temp;
	temp.hour=hour+t.hour;
	temp.minute=minute+t.minute;
	if(temp.minute>60)
	{
	temp.hour++;
	temp.minute=(temp.minute)%60;
  }
  return(temp);

	
	}
};
int main()
{time maths,c,result;
maths.setdata(2,45);
c.setdata(1,56);
cout<<"first time is \n";

maths.displaydata();
cout<<"\nsecond time is\n";
c.displaydata();
result=maths.sum(c);
cout<<"\nthe net time is\n";
result.displaydata();

getch();
return 0;


}
