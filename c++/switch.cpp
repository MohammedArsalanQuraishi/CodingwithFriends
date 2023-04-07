#include <iostream>
using namespace std;

int main()
{
    char button; 
    cout<<"Enter the (A)/(B)/(C)/(D)/(G) :";
    cin>>button;

    switch (button)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;
    case 'b':
        cout<<"Namaste"<<endl;
        break;
    case 'c':
        cout<<"Hola"<<endl;
        break;
    case 'd':
        cout<<"Ciao"<<endl;
        break;
    case 'e':
        cout<<"Assalamualaikum"<<endl;
        break;
    case 'f':
        cout<<"Pranadm"<<endl;
        break;
    
    default:
    cout<<"I am still learning more!";
        break;
    }
    return 0;
}