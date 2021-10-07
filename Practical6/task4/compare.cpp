#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int compare(string a,string b)
{
	if(a.length()==b.length())
	{
		for(int i=0;i<a.length();i++)
		{
			if(a[i]!=b[i])
      {
        return 0;
       }
     }      
return 1;
    
  }
	else
	{
		return 0;
	}
}
int main()
{
	string a="";
  getline(cin,a);
  string b="";
  getline(cin,b);
  cout<<(compare(a,b)?"Equal":"Not equal")<<endl;
  return 0;
}
          

