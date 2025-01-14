#include<iostream>
using namespace std;

int largestNumber(int arr[])
{
    int temp = 4;
    for(int i=4;i>=0;i--)
    {
        if(arr[i]>arr[temp])
        {
            temp = i;
        }
    }
    return arr[temp];
    
}

int smallestNumber(int arr[])
{
    int temp = 4;
    for(int i=4;i>=0;i--)
    {
        if(arr[i]<arr[temp])
        {
            temp = i;
        }
    }
    return arr[temp];
    
}


int main()
{
    int num[5];
    cout<<"Enter the array : ";
    for(int i=0;i<5;i++)
    {
        cin>>num[i];
    }

    cout<<"The ans is : "<<largestNumber(num)<<endl;
    cout<<"The ans is : "<<smallestNumber(num);
}