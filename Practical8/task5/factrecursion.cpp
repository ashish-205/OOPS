#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==1)
	{
		return n;	
	}
	else
	{
			return n*fact(n-1);
	}
}
int main()
{	
	int n;
	cout<<"Enter a number :";
	cin>>n;
	cout<<"Factorial of a number is "<<fact(n)<<endl;
	return 0;
}
