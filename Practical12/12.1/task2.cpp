#include<iostream>
using namespace std;
class A{
    private:
        int x=20;
    public:
        int y=30;
    protected:
        int z=40;
};
class B:public A{
    public:
    void display()
    {
        cout<<"Function called of class B"<<endl;
    }
};
class C:protected A{
    public:
    void display1()
    {
        cout<<"Function called of class C"<<endl;
    }
};
class D:private A{
    public:
    void display2()
    {
        cout<<"Function called of class D"<<endl;
    }
};
int main()
{
    B obj;
   // cout<<obj.x<<endl;  //throw an error beacuse x is a private member and cannot be accessed in inherited classes or from main function
    cout<<obj.y<<endl;  
    //cout<<obj.z<<endl;  // throw an error beacuse z is a protected member and cannot be accessed in inherited classes or from main function
                        //but can be accessed using child class 
    return 0;
}