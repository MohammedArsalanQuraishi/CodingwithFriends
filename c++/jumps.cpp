#include <iostream>
using namespace std;

int main()
{
    int pocketmoney=3000;
    for (int date=1;date<=30;date ++)
    {
    cin>>date;
        if (date%2==0)
        {
            cout<<"Go out today"<<endl;
            continue;
        }
        else
        {
            cout<<"You cannot go out today";
        }
        
        if (pocketmoney==0)
        {
            pocketmoney=pocketmoney-300;
            break;
        }
        
    }

 return 0;   
}