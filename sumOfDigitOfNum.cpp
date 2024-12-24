#include<iostream>
using namespace std;

// int sumOfDigit(int n)
// {
//     int ans=0;
//     while(n>0)
//     {
//         if(n%10!=0)
//         {
//             ans = ans+(n%10);
//             n=n/10;
//         }
//     }
//     return ans;
// }

int sumOfDigit(int n)
{
    int ans=0;
    for(n;n>0;n/=10)
        ans=ans+(n%10);
    return ans;
}
int main(){
    int num;
    cout<<"Enter the number : "<<endl;
    cin>>num;
    cout<<sumOfDigit(num);
    return 0;
}