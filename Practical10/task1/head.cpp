#include<iostream>
#include<string>
using namespace std;
class student{
	private:
		string name;
		string address;
		long int telephone;
		long int mobile;
		string head;
	public:
		void getdata()
		{
			cout<<"Name :";
			cin>>name;
			cout<<"Address :";
			cin>>address;
			cout<<"Telephone :";
			cin>>telephone;
			cout<<"Mobile :";
			cin>>mobile;
			cout<<"Head of family :";
			cin>>head;
		}
			void showdata()
			{
			cout<<"Name :"<<name<<endl;
			cout<<"Address :"<<address<<endl;
			cout<<"Telephone :"<<telephone<<endl;
			cout<<"Mobile :"<<mobile<<endl;
			cout<<"Head of the family :"<<head<<endl;
			}
};
int main()
{
	int n;
	cout<<"Enter number of student :";
	cin>>n;
	student s[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter data :"<<i+1<<endl;
	  s[i].getdata();
	}
	for(int i=0;i<n;i++)
	{
		cout<<endl;
	  cout<<"Directory :"<<endl;
	  cout<<"Data of student:"<<i+1<<endl;
	  s[i].showdata();
	 }
	 return 0;
}
	
	 
		
			
