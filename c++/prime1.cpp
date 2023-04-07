#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int i;
    for (i=2;i<n;i++)
    {
        if (n%i==0)
        {
            cout<<"The number is 'Non-Prime'";
            break;
        }
    }
    if (i==n)
    {
    cout<<"The number is 'Prime'";
    }
    
    return 0;
}