#include <iostream>
using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;

//     if ( n%2==0 && n%3==0 )
//     {
//         cout<<"Divisible by both 2 , 3 and 6"<<endl;
//     }    
//         else if (n%2==0)
//         {
//             cout<<"Divisible by only 2"<<endl;
//         }
//         else if (n%3==0)
//         {
//             cout<<"Divisible by only 3"<<endl;
//         }
//         else
//         {
//             cout<<"Divisible by none!";
//         }
        
    
// }

//Input a number n and tell whetherit is equal to, less than or more than 10

int main()
{
    int n;
    cin>>n;

    if (n<10)
    {
        cout<<"The number is less than 10!";
    }
    else if (n>10)
    {
        cout<<"The number is more than 10!";
    }
    else
    {
        cout<<"The number is equal to 10!";
    }
    
return 0;

}