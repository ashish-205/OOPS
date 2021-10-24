#include<iostream>
#include<math.h>
using namespace std;

void seq(int n)
{
	if(n==1)
	{
		cout<<2<<" ";
		return;
	}
	seq(n-1);
	cout<<(pow(n,n)+n)<<" ";
	return;
}
int main()
{	
	int n;
	cout<<"Enter n :";
	cin>>n;
	seq(n);
	cout<<endl;
	return 0;
}
