#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> vec;
    //vector<int> vec={1,2,3};
    //vector<int> vec(3,0);

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    for(int i:vec)
        cout<<i<<" ";
    cout<<endl;

    cout<<vec.size()<<endl;
    vec.pop_back();
    for(int i : vec)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<vec.at(1);
    return 0;
}