#include<iostream>
using namespace std;
class person
{
	public:
	int age;
	friend int operator +(person &a,person &b);
};
int operator +(person &a,person &b)
{
	return a.age+b.age;
}
signed main()
{
	person a,b;
	a.age=19;
	b.age=22;
	cout<<"The sum of a and b :"<<a+b<<endl;
	return 0;
}

