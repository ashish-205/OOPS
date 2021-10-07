#include<iostream>
#include<string>
using namespace  std;
int main()
{
       int x;
        string a;
        string b;
        getline(cin,a);
        getline(cin,b);
        if(a.length()==b.length())
        {
				 x=a.compare(b);
		}
        if(x==0)
        {
            cout<<"Strings are equal";
         }
         else
         {
				cout<<"Strings are unequal";
		}
        return 0;
    }
