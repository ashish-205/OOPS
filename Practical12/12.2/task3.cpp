
//passing parameters to base class through derived class constructor
// to pass parameter to constructor we use child(int a)  : parent class(a)

#include<iostream>
using namespace std;
class parent{
   public:
   int aa ;
  parent(int a)
  {
      aa = a ;
      cout<< aa <<endl;
  }
};

class child:public parent{
    public:
    int x ;
         child(int a) : parent(a)  
   {
       x = a ;
      
      
   }
};
int main()
{
    child  obj(10451);
    return 0;
}