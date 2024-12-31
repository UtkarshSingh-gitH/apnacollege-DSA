#include<iostream>
using namespace std;

int main()
{
    int n,i,result=0;
    int power=0;
    cout<<"Enter the number : ";
    cin>>n;
    while(n>0)
    {
        i = n%10;
        n =n/10;
        if(power==0)
        {
            result = result+(1*i);
            power++;
        }
        result = result = (2*power*i);
        power = power*2;
    }
    cout<<result;
}