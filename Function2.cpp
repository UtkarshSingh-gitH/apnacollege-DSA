//nth Fibonacci

#include <iostream>
using namespace std;

int nthFibonacci(int n)
{
    int a=0,b=1,next;
    for (int i=2; i<=n;i++)
    {
        next=a+b;
        a=b;
        b=next;
    }
    return b;
}

int main(){
    int n;
    cout<<"Enter the fibonacci term : ";
    cin>>n;
    cout<<nthFibonacci(n);
}