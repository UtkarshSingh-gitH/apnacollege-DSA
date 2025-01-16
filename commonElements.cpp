#include<iostream>
using namespace std;

void commonElement(int ar[],int arr[]);

int main()
{
    int ar[] = {1,2,3,4};
    int arr[]  = {3,4,5,6,1};

    commonElement(ar,arr);

    return 0;
}

void commonElement(int ar[],int arr[])
{
    for(int i=0;i<4;i++)
    {
        int j;
        for(j=0;j<5;j++)
        {
            if(ar[i]==arr[j])
            {
                cout<<ar[i]<<" ";
            }
        }
    }
}