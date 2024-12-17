#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    int ans = 1;
    for(int i=1; i<=num; i++)
    {
        ans*=i;
    }
    cout<<ans<<" is the factorial"<<endl;
    return 0;
}