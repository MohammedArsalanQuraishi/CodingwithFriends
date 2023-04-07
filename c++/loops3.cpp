#include<iostream>
using namespace std;

int main()
{
    int sum=0,i=0;
    int n;
    cin>>n;
    do{
        sum=sum+i;
        i++;
    }
    while(i<n);
    {
        cout<<"sum is:"<<sum;
    }
    return 0;
}