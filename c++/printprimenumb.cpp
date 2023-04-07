#include<iostream>
using namespace std;

int main()
{
    int n, num=2;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    do
    {
        int div=2;
        do
        {
            if (num%div==0)
            {
                num=num+1;
            }
            else
            {
                div=div+1;
                break;
            }
            
        } while (div<num);
        cout<<"Print prime numbers : "<<num<<endl;
        num=num+1;
    } while (num<=n);
    return 0;
}