#include<iostream>
#include<climits>
using namespace std;

void swapMinMax(int arr[],int size)
{
    int s,l;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for(int i=0; i<size;i++)
    {
        if(arr[i]<smallest)
        {
            smallest = arr[i];
            s=i;
        }
        if(arr[i]>largest)
        {
            largest = arr[i];
            l=i;
        }
    }
    swap(arr[s],arr[l]);
}

int main()
{
    int arr[]={1,2,5,3,4};
    int size = 5;
    swapMinMax(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}