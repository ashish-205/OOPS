
//execution flow of constructor is from parent class to child class
#include<iostream>
using namespace std;
class parent{
   public:
    parent()
    {
        cout<<"Parent class constructor called"<<endl;
    }
};
class base:public parent{
    public:
         base()
    {
        cout<<"Base class constructor called"<<endl;
    }
};
class child:public base{
    public:
         child()
    {
        cout<<"Child class constructor called"<<endl;
    }
};

   
int main()
{
    child  obj;
    return 0;
}