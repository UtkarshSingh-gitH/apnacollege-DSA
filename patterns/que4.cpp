#include <iostream>
using namespace std;

int main()
{
    int n;
    int num=1;
    cout<<"Give the size"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for (int j=0; j<=i;j++)
        {
            cout<<num;
        }
        cout<<endl;
        num++;
    }
}