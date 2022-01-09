#include<iostream>
using namespace std;
class base
{
	public:
	void display()
	{
		cout<<"From base class"<<endl;
	}
	virtual int sum(int a,int b)
	{
		return (a+b);
	}
};
class child:public base
{
	public:
	void display()
	{
		cout<<"From child class"<<endl;
	}
	int sum(int a,int b)
	{
		return (a+b+1);
	}
};
int main()
{
	base *p;
	child c;
	p=&c;
	p->display();
	cout<<"Sum ="<<p->sum(3,5)<<endl;
}