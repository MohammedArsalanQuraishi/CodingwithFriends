#include <iostream> //Half Inverted Triangle pattern3
using namespace std;

int main()
{
    int m;
    cin>>m;

    for (int i=m;i>=1;i--)
    {
        for (int j=1;j<=i;j++)
        {
                cout<<" * ";
        }
        cout<<endl;
}
}