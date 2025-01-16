#include<iostream>
using namespace std;

void uniqueValue(int arr[])
{
    
    for(int i=0;i<5;i++)
    {
        int j;
        for(j=0;j<5;j++)
        {
            if(arr[i]==arr[j])
                break;
        }
        if(i==j)
            cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={1,2,3,2,1};
    uniqueValue(arr);
    return 0;
}