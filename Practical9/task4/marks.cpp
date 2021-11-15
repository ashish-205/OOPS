#include<iostream>
#include<string>
using namespace std;
class student
{
	string name;
	int age,marks;
	public:
	friend void add(student a,student b,student c);
	friend void display(student a);
	student(string n,int a,int m)
	{
		name=n;
		age=a;
		marks=m;
	}
};
void add(student a,student b,student c)
{
	int marks=a.marks+b.marks+c.marks;
	cout<<"Total marks :"<<marks<<endl;
	}
void display(student a)
{
	cout<<a.name<<endl<<"Age:"<<a.age<<endl<<"Marks :"<<a.marks<<endl;
	
}
signed main()
{
	student s1=student("Shyam Ram",23,55),s2=student("Harry Potter",19,62),s3=student("David ",20,76);
	display(s1);
	display(s2);
	display(s3);
	add(s1,s2,s3);
	return 0;
}



