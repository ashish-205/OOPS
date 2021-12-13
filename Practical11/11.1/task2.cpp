#include<iostream>
using namespace std;
class parent{
    public:
       
        void display()
        {
            cout<<"Display function called"<<endl;
        }
};
class child : public parent{
    public:
        void display1()
        {
           cout<<"Display1 function called"<<endl;
        }
};
int main()
{
    child obj;
    obj.display();
    return 0;
}