#include<iostream>
using namespace std;

int main()
{
    int marks[5] = {99,100,48,37,98};
    int size= sizeof(marks)/sizeof(int);
    for(int i=0;i<size;i++)
    {
        cout<<marks[i]<<endl;
    }
    return 0;
}