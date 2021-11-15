#include<iostream>
using namespace std;
class student
{	
	private:
		int roll;
		char name[50];
		char sec;
	public:
		void getdet()
		{
			cin>>name>>roll>>sec;
		}
		void showdet()
		{
			cout<<"Name :"<<name<<endl;
			cout<<"Section :"<<sec<<endl;
			cout<<"Roll number :"<<roll<<endl;
		}
};
int main()
{
	int n;
	cout<<"Enter number of student :";
	cin>>n;
	student s1[n],*s;
	s=s1;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter data of student :"<<endl;
		(s+i)->getdet();
	}
	for(int i=0;i<n;i++)
	{
		cout<<"Data of student :"<<i+1<<endl;
		(s+i)->showdet();
	}
	return 0;
}
	

