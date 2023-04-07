#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the numbers : \n";
    cin>>a>>b>>c;
    if (a>b)
    {
        if (a>c)
        {
            cout<<"The maximum number is :";
            cout<<a<<endl;
            
        }
        else
        {
           
            cout<<c<<endl;
        }
    }
    else
    {
        if (b>c)
        {
            cout<<"The maximum number is :";
            cout<<b<<endl;
        }
        else
        {
            cout<<"The maximum number is :";
            cout<<c<<endl;
        }
        
    }
    
}