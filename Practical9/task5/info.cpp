#include<iostream>
#include<string>
using namespace std;
struct student
{
	string name;
	int age,marks;
	student(string n,int a,int m)
	{
		name=n;
		age=a;
		marks=m;
	}
};
class collage
{
	public:
		int student_number;
		int faculty_number;
		int classroom;
		collage(int s,int f,int c)
		{
			student_number=s;
			faculty_number=f;
			classroom=c;
		}
	};
signed main()
{
	student s1=student("Harry",20,87);collage c1=collage(56938,15,8586);
	cout<<"Student :\n"<<s1.name<<endl<<"Age :"<<s1.age<<"\nMarks : "<<s1.marks<<endl;
	cout<<"Collage :\n"<<"No.of students :"<<c1.student_number<<"\nNo. of faculty:"<<c1.faculty_number<<"\nNo. of class rooms :"<<c1.classroom<<endl;
	return 0;
}
			
		

