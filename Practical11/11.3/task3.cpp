/* if we make the function with same name in both classes then it will call the function of that class to which the object belongs to
that is the concept of overriding */

#include<iostream>
using namespace std;
class A{
    public:
    void display()
    {
        cout<<"Display function class A called"<<endl;
    }
};
class B:public A{
    public:
    void display()
    {
        cout<<"Display function of class B called"<<endl;
    }
};
void check(A obj)
{
    obj.display();
}
int main()
{
    B obj;
    obj.display(); //this will call function of class B
    obj.A::display();  //this will call function of class A
    check(obj);        //using function to avoid theuse of overriding..
    return 0;
}