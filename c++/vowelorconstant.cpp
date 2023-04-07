// #include <iostream>
// using namespace std;

// int main()
// {
//   char c;

//   int upcase,lowcase;

//   cout<<"Enter the alphebet :";

//   cin>>c;

//   lowcase = (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');

//   upcase = (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
//   if (lowcase||upcase)
//   {
//     cout<<"It is a vowel";
//   }
//   else
//   {
//     cout<<"It is a constant";
//   }

//   return 0;
// }


#include<iostream>
using namespace std;

int main()
{
    char vowel;

    cout<<"Enter any alphabet :"<<endl;
    cin>>vowel;

    switch(vowel)
    {
        case 'a':
        cout<<"It is a vowel";
        break;
        
        case 'e':
        cout<<"It is a vowel";
        break;

        case 'i':
        cout<<"It is a vowel";
        break;
        
        case 'o':
        cout<<"It is a vowel";
        break;
        
        case 'u':
        cout<<"It is a vowel";
        break;
        
        case 'A':
        cout<<"It is a vowel";
        break;
        
        case 'E':
        cout<<"It is a vowel";
        break;
        
        case 'I':
        cout<<"It is a vowel";
        break;
        
        case 'O':
        cout<<"It is a vowel";
        break;
        
        case 'U':
        cout<<"It is a vowel";
        break;

        default:
        cout<<"It is a constant";
    }
}