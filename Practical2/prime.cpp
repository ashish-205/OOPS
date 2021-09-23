#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n,c=0;
   cout<<endl<<"Enter number : ";
   cin>>n;
   for(int i=2;i<n/2;i++)
   {
      if(n%i==0)
        {
           c++;
        }
   }
   if(c==0)
    {
        cout<<endl<<"It a prime number"<<endl;
     }
    else
    {
      cout<<endl<<"It is not a prime number "<<endl;
}
return 0;
}
