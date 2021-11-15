#include<iostream>
#include<string>
using namespace std;
class student{
	public:
		string name;
		int age;
		char section;
		int marks;
};
int main()
{
	int temp=0,n;
	cout<<"Enter no. of students :";
	cin>>n;
	student obj[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter marks of students :";
		cin>>obj[i].marks;
	}
		for(int i=0;i<n;i++)
	{
		temp=temp+obj[i].marks;
	}
	cout<<"Total marks :"<<temp<<endl;
	
	return 0;
	
}

