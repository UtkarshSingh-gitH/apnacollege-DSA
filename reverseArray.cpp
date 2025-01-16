#include<iostream>
using namespace std;

int reverseArray(int arr[], int size, int p1, int p2)
{
     for(int i=0;i<=size/2;i++) //while(p1<p2)
     {
        swap(arr[p1],arr[p2]);
        p1++;p2--;
     }
     for(int i=0;i<size;i++)
     {
        cout<<arr[i];
     }
     return 0;
}

int main()
{
    int arr[]={4,2,7,8,1,2,5};
    int size=7,p1=0,p2=6;
    reverseArray(arr,size,p1,p2);
    return 0;
}

//TC = O(n)

/*
while (p1<p2)
{
    swap(arr[p1],arr[p2]);
}
*/