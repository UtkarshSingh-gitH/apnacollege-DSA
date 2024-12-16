#include<iostream>
using namespace std;

int main()
{
    int num,ans=0;
    cout<<"Enter the number till which you want the sum :"<<endl;
    cin>>num;
    for(int i=0; i<=num; i++)
    {
        ans+=i;
    }
    cout<<"The sum is : "<<ans<<endl;
}
/*
method 1:
    while(i<=num)
    {
        ans=ans+1;
        i++;
    }

method 2:
    ans=(num(num+1))/2
*/