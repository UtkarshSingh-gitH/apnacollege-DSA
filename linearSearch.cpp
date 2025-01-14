#include<iostream>
using namespace std;

int linearSearch(int arr[],int size,int target)
{
    for (int i=0;i<size;i++)
    {
        if(arr[i]==target)
            return i;
    }
    return -1;
}

int main()
{
    int target;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    cout<<"Enter a number b/w 1-10 : ";
    cin>>target;
    cout<<linearSearch(arr,size,target);
}
//TC = O(n)