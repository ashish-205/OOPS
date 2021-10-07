#include<iostream>
#include<string>
using namespace  std;
int main()
{
       int x;
        string str="hello";
         cout<<&str<<endl;
        str[0]= 'j';
        cout<<&str<<endl;
        cout<<str<<endl;
				
        return 0;
    }
