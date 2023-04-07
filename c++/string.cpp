#include<iostream>
using namespace std;

int main()
{
    string s;
    cout<<"Enter a String ";

   getline(cin,s);

   cout<<"   you have enterted : ";
   cout<<s<<endl;

   s.push_back('a');
   cout<<"after using push back: "<<s<<endl;

   s.pop_back();
   cout<<"after using pop back :"<<s<<endl;


   return 0;
}