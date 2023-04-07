#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            if (j<=n-i)
            {
                cout<<"  ";
            }
            else
            {
                cout<<" *";
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
//      int m;
//      cin>>m;

//      for (int i=m;i>=1;i--)
//      {
//          for (int j=1;j<=i;j++)
//          {
//              if (j<=m-i)
//              {
//                  cout<<" * ";
//              }
            
//          }
//          cout<<endl;
//  }

    int m;
    cin>>m;

    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            cout<<'*';
        }
        int space=2*m-2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<'*';
        }
        cout<<endl;
    }

    for(int i=m;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<'*';
        }
        int space=2*m-2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<'*';
        }
        cout<<endl;
    }
    return 0;
}