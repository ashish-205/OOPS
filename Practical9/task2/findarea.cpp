#include<iostream>
using namespace std;
class farea{
	public:
	int s;
	int l;
	int width;
	farea(int x)
	{
		s=x;
	}
	farea(int a,int b)
	{
		l=a;
		width=b;
	}
	void area(int side)
	{
		int ar=s*s;
		cout<<"Area of square :"<<ar<<endl;
	}
	void area(int length,int breadth)
	{
		int ar1=length *breadth;
		cout<<"Area of rectangle:"<<ar1<<endl;
	}
};
int main()
{
	farea a(10),b(5,6);
	a.area(a.s);
	b.area(b.l,b.width);
	return 0;
}
	
