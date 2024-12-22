#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of pyramid ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int num1=1;
        for(int j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        for(int k=0; k<i;k++)
        {
            cout<<num1;
            num1++;
        }
        for(int m=i-1;m>0;m--)
        {
            cout<<m;
        }
        // for(int l=1;l<n;l++)
        // {
        //     cout<<" ";
        // }
        cout<<endl;

    }
    return 0;
}