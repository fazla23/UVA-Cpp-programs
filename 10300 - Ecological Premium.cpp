#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum,t,n,a,b,c;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        while(n--)
        {
           cin>>a>>b>>c;
           sum=sum+(a*c);
        }
        cout<<sum<<endl;
    }
}
