#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void reverse(string b)
{
		string c="";
		for(int i=b.length()-1;i>=0;i--)
		{
				c=c+b[i];
		}
		cout<<c<<endl;
}
int main()
{
		string a="";
		getline(cin,a);
		reverse(a);
		return 0;
}
