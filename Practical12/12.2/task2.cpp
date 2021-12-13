
//destructor is called manually
#include<iostream>
using namespace std;
class parent{
   public:
    ~parent()
    {
        cout<<"Parent class destructor called"<<endl;
    }
};
class base:public parent{
    public:
         ~base()
    {
        cout<<"Base class destructor called"<<endl;
    }
};
class child:public base{
    public:
         ~child()
    {
        cout<<"Child class destructor called"<<endl;
    }
};

   
int main()
{
    child  obj;
    return 0;
}