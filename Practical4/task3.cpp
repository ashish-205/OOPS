#include<iostream>
using namespace std;

namespace first
{
  void add(int a,int b)
  {
     cout<<"Sum is "<<a+b<<endl;
   }
}
namespace second
{
  void add(float a,float b)
  {
     cout<<"Sum is "<<a+b<<endl;
  }
}
//using namespace first;
int main()
{
  // add(1,2);
  //add(1.5f,2.3f);
   add(2,2.4f);
   //add(0,0);
   //add(1.5,2);
}
 	
