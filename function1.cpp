//Prime number from 2 to n

#include<iostream>
using namespace std;

int primeCount(int n){
    bool b=true;
    for(int i=2; i*i<=n;i++)
    {
         
        if(n%i==0)
        {
            b=false;
            break;
        }
    }
    if(b)
        return n;
}

int main(){
    int n;
    cout<<"Enter the number till where you want the prime numbers : "<<endl;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        int prime = primeCount(i);
        if(prime!=0)
            cout<<prime<<" ";
    }
    return 0;
}