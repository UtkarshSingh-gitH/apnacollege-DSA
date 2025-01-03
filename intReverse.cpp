#include<iostream>
using namespace std;

int numReverse(int n)
{
    int rev=0;
    while(n>0)
    {
        rev = rev*10 + (n%10);
        n /= 10;
    }
    return rev;
}

int main()
{
    int n;
    cout<<"Input the number : ";
    cin>>n;
    cout<<numReverse(n);
}