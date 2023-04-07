#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n==2)
    {
        cout<<"Prime"<<endl;
    }
    else
    {    
        for(int i=2;i<=sqrt(n);i++)
        {
            if (n%i==0)
            {
                cout<<"Non-prime"<<endl;
                break;
            }
            else
            {
                cout<<"Prime"<<endl;
                break;
            }
        
    }
    }
return 0;
}




// #include<iostream>
// #include<cmath>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;

//     for(int i=2;i<=sqrt(n);i++)
//     {
//         if(n%i==0)
//         {
//             cout<<"Non-prime"<<endl;
//             break;
//         }
//         else{
//             cout<<"Prime"<<endl;
//             break;
//         }
//     }
//     return 0;
// }