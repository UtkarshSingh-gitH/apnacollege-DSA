#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size"<<endl;
    cin>>n;
    int num=1;
    for(int i=0;i<n;i++)
    {
        for(int k=i;k>0;k--)
        {
            cout<<" ";
        }
        for(int j=num;j<=n;j++)
        {
            cout<<num;
        }
        num++;
        cout<<endl;
    }
}