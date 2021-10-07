#include<iostream.h>
#include<string>
using namespace std;
int main()
{
		string a;
		string b;
		getline(cin,a);
		getline(cin,b);
		 
		  int x=a.compare(b);
		  if(x==0)
		  {
		   		cout<<"Strings are equal"<<endl;
		   }
		   else if(x>0)
		   {
		   		cout<<"First string is longer"<<endl;
		   	}
		   	else
		   	{
				  cout<<"String second is longer"<<endl;
				 }
				return 0;
				}
