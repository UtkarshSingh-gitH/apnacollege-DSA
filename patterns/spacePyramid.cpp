#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of pyramid : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout<<" ";
        }
        int num =1;
        for(int k=0;k<=i;k++)
        {
            
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}