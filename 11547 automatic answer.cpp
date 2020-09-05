#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x=((((((n*567)/9)+7492)*235)/47)-298);
        x=x/10;
        x=x%10;
        cout<<abs(x)<<endl;
    }
}

