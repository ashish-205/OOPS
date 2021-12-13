//function of bluewhale by the object of bluewhale
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
            cout<<"I belong to both the categories : Mammals and MarineAnimals"<<endl;
        }
};
int main()
{
    bluewhale obj2;
    obj2.display2();
return 0;
}