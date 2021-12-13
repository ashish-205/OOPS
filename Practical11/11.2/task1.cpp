//function of mammals by the object of mammals
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
    mammals obj;
    obj.display();
return 0;
}