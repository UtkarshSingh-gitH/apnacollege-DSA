#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size"<<endl;
    cin>> n;
    int num=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}