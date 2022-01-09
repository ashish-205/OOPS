#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &v)
{
    vector<int> :: iterator it;
    for ( it = v.begin(); it != v.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;    
}
int main()
{
    vector<int> v;
    cout<<"Enter number of elements : ";
    int n,a;
    cin>>n;
      cout<<"Enter elements : ";
    for (int i = 0; i < n; i++)
    {
      
        cin>>a;
        v.push_back(a);
    }
    cout<<"Printing the vector :";
    print(v);
    cout<<"Size of vector :"<<v.size()<<endl;
    cout<<"Capacity of vector :"<<v.max_size()<<endl;
    v.resize(10);
    cout<<"Size of vector after resizing :"<<v.size()<<endl;
    if(v.empty())
    cout<<"The vector is empty"<<endl;
    else
    cout<<"The vector is not empty "<<endl;
}