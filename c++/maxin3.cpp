#include <iostream>
using namespace std;

int main()
{
  int a,b,c;
  cin>>a>>b>>c;

  if (a>b)
  {
  
   if(a>c)
  {
    cout<<"maximum number is a :"<<a<<endl;
  }
  else{
    cout<<"maximum number is c :"<<c<<endl;
  }
  }
  else{
    if(b>c)
    {
      cout<<"maximum number is b :"<<b<<endl;
    }
    else{
      cout<<"maximum number is c :"<<c<<endl;
    }
  }
  
  return 0;
}