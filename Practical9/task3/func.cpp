#include<iostream>
using namespace std;
class abc{
	public:
		void func()
		{
			static int count=0;
			count++;
			cout<<"No.of times Function called:"<<count<<endl;
		}
		
};
int main()
{
	abc a,b,c;
	a.func();
	b.func();
	c.func();
	a.func();
	b.func();
	return 0;
	}
	
	
