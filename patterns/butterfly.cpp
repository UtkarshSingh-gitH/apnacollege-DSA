#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size ";
    cin>>n;
    //top part 
    for(int i=0; i<n; i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        for(int k=n-1;k>i;k--)
        {
            cout<<" ";
        }
        for(int l=n;l>i;l--)
        {
            cout<<" ";
        }
        for(int m=0;m<i+1;m++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    //bottom 
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout<<"*";
        }
        for(int k=0;k<i+1;k++)
        {
            cout<<" ";
        }
        for(int m=0;m<i;m++)
        {
            cout<<" ";
        }
        for(int l=n;l>i;l--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}