//you can directly use condiion as [if (c>='a' && c<='z')]
//or [if(ch>=65 && ch<=90)]
#include <iostream>
using namespace std;

int main()
{
    char c;
    int x;
    cout<<"Enter a Character :"<<endl;
    cin>>c;
    x=c;
    if(x>=65 && x<=90)
    {
        cout<<c<<" is a upper case character"<<endl;
    } else if(x>=97 && x<=122){
        cout<<c<<" is a lowe case character"<<endl;
    } else {
        cout<<"Wrong input"<<endl;
    }
    return 0;
}