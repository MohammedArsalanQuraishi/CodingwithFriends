#include <iostream>
using namespace std;

int main()
{

int sidea,sideb,sidec;

cout<<"Enter the three sides of triangle"<<endl;

cin>>sidea>>sideb>>sidec;

if (sidea==sideb&&sideb==sidec)
{
  cout<<"It is a equilateral triangle"<<endl;
}
else if(sidea==sideb||sidea==sidec||sideb==sidec)
{
  cout<<"It is a isosceles trisngle"<<endl;
}
else
{
  cout<<"It is a scalene triangle"<<endl;
}
return 0;
}