#include<iostream>
using namespace std;
class rem
{
	private:
		int a;
		int b;
	public:
		rem(int a,int b)
		{
			cout<<a%b<<endl;
		}
};
int main()
{
	int a=21,b=5;
	rem r(a,b);
	return 0;
}
	
