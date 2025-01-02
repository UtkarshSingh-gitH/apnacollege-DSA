#include<iostream>
using namespace std;

bool powerOfTwoUsingLoop(int n)
{
  bool result= true;
  int temp=n;
  while(temp>1)
  {
    if(temp%2!=0)
    {
        result = false;
        break;
    }
    temp = temp/2;
  }
  return result;
}

bool powerOfTwo(int n)
{
  if(n==1)
  {
    return 0;
  }
  /*Explanation to the code below :
  1. this bit wise operator is done on the binary form of int n
  2. the binary form a number which is power of 2 consist just one 1 in its binary form.
  3. the -n binary form will also have that rightmost 1 at the same location as it was in n.
  4. so when we do n & -n we get the same number n if its power of 2.*/

  if((n & (-n)) == n)
  {
    return true;
  }
  else 
    return false;
    
}

int main()
{
    int n,ans1, ans2;
    cout<<"Enter the number : ";
    cin>>n;
    ans1 = powerOfTwoUsingLoop(n);
    ans2 = powerOfTwo(n);
    if(ans1)
        cout<<"TRUE"<<endl;
    else
        cout<<"FALSE"<<endl;

    if(ans2)
        cout<<"TRUE"<<endl;
    else
        cout<<"FALSE"<<endl;
    return 0;
}


/*
8->  001000
-8-> 111000
&->  001000
1. this is a power of 2 hence just one 1 in binary part.
2. the right most 1 is same through 8,-8 and '&' of both.
3. 8 & -8, gives back 8. 

6->  000110
-6-> 111010
&->  000010
1. this is not a power of 2 hence just more than one 1 in binary part.
2. the right most 1 is same through 8,-8 and '&' of both.
3. 8 & -8, does not gives back 8.*/