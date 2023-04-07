#include <iostream> //Half Pyramid After 180 Rotation Pattern4
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int i=1;i<=n;i++)
    {
        int j; 
        for (j=1;j<=n+i;j++)
        {
            for(;j<=n;j++){
            if (j<=n-i)
            {
                cout<<"  ";
            }
            else
            {
                cout<<" *";
            }
            }
        }
        cout<<endl;
    }
    int row,col;
    cin>>row>>col;

    for (int i=1; i<=row;i++)
    {
        for (int j=1;j<=col;j++)
        {
            if (i==1 || i==row || j==1 || j==col)
            {
                cout<<" *";
            }
            else
            {
                cout<<"  ";
            }
            
        }
        
        cout<<endl;
    }
    int m;
    cin>>m;

    for (int i=m;i>=1;i--)
    {
        for (int j=1;j<=n-i;j++)
        {
                cout<<" *";
        }
        cout<<endl;
} int f;
     cin>>f;

     for (int i=f;i>=1;i--)
     {
         for (int j=1;j<=i;j++)
         {
             if (j<=f-i)
             {
                 cout<<" * ";
             }
            
         }
         cout<<endl;
 }
    
    return 0;
}