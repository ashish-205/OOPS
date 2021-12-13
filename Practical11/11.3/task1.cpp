//condition of diamond problem
#include<iostream>
using namespace std;
class A{
    public:
    void display()
    {
        cout<<"Display function called"<<endl;
    }
};
class B: public A{
    public:
    void display1()
    {
        cout<<"Display function called of class B"<<endl;
    }
};
class C: public A{
    public:
    void display2()
    {
       cout<<"Display function called of class C"<<endl; 
    }
};
class D:public C,public B{
    public:
   void display3()
   {
       cout<<"Hello world"<<endl;
   }
};
int main()
{
    D obj;
    obj.display();

    return 0;
}