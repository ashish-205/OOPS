#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	int a;
	cout<<"Enter your choice :";
	cin>>a;
	time_t ttime=time(0);
	tm *local_time =localtime(&ttime);

	switch(a)
	{
		case 1:
			cout<<"Year :"<<1900 +local_time->tm_year<<endl;
			break;
		case 2:
			cout<<"Month :"<<1 +local_time->tm_mon<<endl;
			break;	
		case 3:
			cout<<"Date :"<<local_time->tm_mday<<endl;
			break;
		case 4:
			cout<<"Time :"<<1 +local_time->tm_hour<<endl;
			break;
		default:
			cout<<"Not applicable"<<endl;
			break;
	}
}
