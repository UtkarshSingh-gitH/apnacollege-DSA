#include<iostream>
using namespace std;

int main()
{
    int num;
    int reverse,result=0;
    int power=1;
    cout<<"Enter the number : ";
    cin>>num;
    while(num>0)
    {
        reverse = num%2;
        result = result+(power*reverse);
        num=num/2;
        power=power*10;

    }
    cout<<result;
    return 0;

}