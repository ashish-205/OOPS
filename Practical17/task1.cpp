#include<iostream>
#include<list>
using namespace std;
void print(list<int> &l)
{
    list<int> :: iterator iter;
    for ( iter = l.begin(); iter != l.end(); iter++)
    {
        cout<<*iter<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> l;
    cout<<"Enter number of elements :  ";
    int n,a;
    cin>>n;
     cout<<"Enter elements : ";
    for (int i = 0; i < n; i++)
    {
       
        cin>>a;
        l.push_back(a);
    }
    cout<<"The list is"<<endl;
    print(l);
    cout<<"Size of list :"<<l.size()<<endl;
    l.sort();
    cout<<"Sorted list"<<endl;
    print(l);
    l.reverse();
    cout<<"Reverse list"<<endl;
    print(l);
}