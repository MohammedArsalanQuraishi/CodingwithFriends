#include <iostream>
using namespace std;

int main()
{

  int n1,n2;
  cin>>n1>>n2;

  if (n1>n2)
  {
    cout<<"maximum number is :"<<n1<<endl;
    cout<<"minimum number is :"<<n2<<endl;
  }
  else{
    cout<<"maximum number is :"<<n2<<endl;
    cout<<"minimum number is :"<<n1<<endl;
  }

  return 0;

}