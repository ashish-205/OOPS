//solution of the diamond problem is making the classes as virutal
#include<iostream>
using namespace std;
class A{
    public:
    void display1()
    {
        cout<<"Display function called"<<endl;
    }
};
class B: virtual public A{
    public:
    void display()
    {
        cout<<"Display function called of class B"<<endl;
    }
};
class C: virtual public A{
    public:
    void display()
    {
       cout<<"Display function called of class C"<<endl; 
    }
};
class D: public C, public B{
    public:
 
};
int main()
{
    D obj;
    obj.display1();

    return 0;
}