#include<iostream>
using namespace std;
class base
{
	public:
	virtual void display()
	{
		cout<<"displaying from base class"<<endl;
	}
	virtual void displaypure()=0;
};
class child:public base
{
	public:
	void display()
	{
		cout<<"\nDisplaying from child class\n"<<endl;
	}
	void displaypure()
	{
		cout<<"\nImplementation of pure virtual function"<<endl;
	}
};
int main()
{
	base *p;
	child c;
	p=&c;
	p->display();
	p->displaypure();
}