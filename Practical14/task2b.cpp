#include<iostream>
using namespace std;
class base
{
	public:
	base()
	{
		cout<<"Base class constructor invoked"<<endl;
	}
	virtual ~base()
	{
		cout<<"Base class destructor invoked"<<endl;
	}
};
class child:public base
{
	public:
	child()
	{
		cout<<"Child class constructor invoked"<<endl;
	}
	~child()
	{
		cout<<"Child class destructor invoked"<<endl;
	}
};
int main()
{
	base *p;
	child d;
	p=&d;
}