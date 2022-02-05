#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"Enter the position where you want to check the bit is set or not:";
    cin>>k;

    // Approach:
    // we will do AND of n with a number whose kth bit is set so if the kth bit of n is also set then it will return any value which is not equal to zero else it will return 0
    if(n&(1<<(k-1)))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }

}