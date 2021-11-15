#include<iostream>
#include<string>
using namespace std;
class student{
	public:
		int rollno;
		int mobile;
		string address;
};
int main()
{
	student sam,john;
	sam.rollno=12;
	sam.mobile=9720772;
	sam.address="delhi";

    cout<<"Sam rollno :"<<sam.rollno<<endl;
	cout<<"Sam mobile :"<<sam.mobile<<endl;
	cout<<"Sam address :"<<sam.address<<endl;
	
	john.rollno=13;
	john.mobile=1234569;
	john.address="dehradun";

    cout<<"John rollno :"<<john.rollno<<endl;
	cout<<"John mobile :"<<john.mobile<<endl;
	cout<<"John address :"<<john.address<<endl;

    return 0;
}

