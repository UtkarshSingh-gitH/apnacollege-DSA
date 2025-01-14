#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size"<<endl;
    cin>>n;
    for(int i=1; i<=n;i++)
    {
        for(int k=i;k<n;k++)
        {
            cout<<" ";
        }
        for(int j=i;j>0;j--)
        {
            cout<<j;
           
        }
        cout<<endl;
    }
    return 0;
}