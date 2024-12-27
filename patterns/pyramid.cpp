#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of pyramid ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int num1=1;
        for(int j=n;j>i+1;j--)
        {
            cout<<" ";
        }
        for(int k=0;k<i+1;k++)
        {
            cout<<num1;
            num1++;
        }
        for(int l=i;l>0;l--)
        {
            cout<<l;
        }
        cout<<endl;

    }
    return 0;
}