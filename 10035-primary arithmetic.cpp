#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll carry(ll a,ll b,ll c)
{
    if(a==0&&b==0)
        return 0;
    int x,y,z=0;
    x=a%10;
    y=b%10;
    c=(x+y+c)/10;
    return carry(a/10,b/10,c)+c;

}

int main()
{
    ll x,a,b,i,j,k,l;
    while(cin>>a>>b)
    {
        if(a==0&&b==0)
            break;
        x=carry(a,b,0);
        if(x==0)
            cout<<"No carry operation."<<endl;
        else if(x==1)
            cout<<x<<" carry operation."<<endl;
        else
            cout<<x<<" carry operations."<<endl;
    }
}
