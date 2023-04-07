#include<iostream>
using namespace std;

int main()
{
    int N,div=2;
    cout<<"Enter the number :";
    cin>>N;
    do
    {
        if (N%div==0)
        {
            cout<<"The number is Non Prime";
            break;
        }
        else
        {
            div=div+1;
            cout<<"The number is Prime";
            break;
            
        }
    } while (div<N);
    
    return 0;
}