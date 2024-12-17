#include<iostream>
using namespace std;

int main()
{
    int num;
    int ans=1;
    cout<<"Enter a number"<<endl;
    cin>>num;
    for(int i=2;i*i<=num/*i<=num-1*/;i++)
    {
        if(num%i==0){
            ans = 0;
            //writing a break here will break out of loop not just if
            break;
        }
    }
    if(ans == 0)
            cout<<num<<" is not a prime number"<<endl;
    else
        cout<<num<<" is a prime numer"<<endl;
    return 0;
}