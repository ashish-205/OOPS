#include<iostream>
#include<string>
using namespace std;
int main()
{
		string a;
		getline(cin,a);
		int j=a.length()-1;
		int flag=0;
		for(int i=0;i<=j;i++)
		{
				if(a[i]==a[j])
				{
						j--;
				}
				else
				{
					flag++;
				}
		}
		if(flag==0)
		{
			cout<<"String is palindrome"<<endl;
		}
		else
		{
			cout<<"Strin is not a palindrome";
		}
		
return 0;
}
