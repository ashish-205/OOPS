#include<iostream>
using namespace std;
class person
{
	public:
	int age;
	friend bool operator <(person &a,person &b);
};
bool operator <(person &a,person &b)
{
	if(a.age<b.age) return true;
	
	return false;
}

signed main()
{
	person a,b;
	a.age=20;
	b.age=23;
	if(a<b)
		cout<<"Age II is greater \n";
		
	else
		cout<<"Age I is greater \n";
	
	
	return 0;
}
