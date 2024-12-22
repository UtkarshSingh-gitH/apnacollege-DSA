#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size"<<endl;
    cin>>n;
    int num=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j>0;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}