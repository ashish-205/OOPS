#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter your choice : ";
	cin>>a;
	
	switch(a)
	{
		case 1:
			cout<<"Year : 2021"<<endl;
			break;
		case 2:
			cout<<"Month : October"<<endl;
			break;
		case 3:
			cout<<"Date : 19/10/2021"<<endl;
			break;
		case 4:
			cout<<"Time : 2:25 PM"<<endl;
			break;
		default:
			cout<<"Not Applicable"<<endl;
			break;
	}
}
