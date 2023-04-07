#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n>>i;
    do
{
    cout<<n++<<endl;
}while(n<i);

return 0;
}