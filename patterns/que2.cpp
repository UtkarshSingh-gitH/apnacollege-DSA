#include<iostream>
using namespace std;

int main()
{
    int in;
    int n=1;
    cout<<"Tell the size of square"<<endl;
    cin>>in;
    
    for(int i=0;i<in;i++)
    {
        for(int j=0;j<in;j++)
        {
            cout<<n<<" ";
            n++;
        }
        cout<<endl;
    }
}