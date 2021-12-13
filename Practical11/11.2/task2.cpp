//function of marineanimal by the object of marineanimal
#include<iostream>
using namespace std;
class mammals{
    public:
        void display()
        {
            cout<<"I am a mammal"<<endl;
        }
};
class marineanimals{
    public:
        void display1()
        {
            cout<<"I am a marine animal"<<endl;
        }
};
class bluewhale: public mammals,public marineanimals{
    public:
        void display2()
        {
            cout<<"I belong to both the categories : mammals and marineanimals"<<endl;
        }
};
int main()
{
    marineanimals obj1;
    obj1.display1();
return 0;
}