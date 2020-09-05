#include<bits/stdc++.h>
#define ll long long
#define pb push_back
ll ar[5000000];
using namespace std;

ll upperbound(ll a,ll b)
{
    ll begin,end,mid,in,i;
    begin=0;end=b-1;in=-1;
    while(begin<=end)
    {
        mid=(begin+end)/2;
        if(ar[mid]==a)
        {
            in=mid;
            begin=mid+1;
        }
        else if(a<ar[mid])
            end=mid-1;
        else
            begin=mid+1;
    }
    //cout<<"a="<<a<<endl;
    //cout<<"u="<<in<<endl;
    return end;
}
ll lowerbound(ll a,ll b)
{
    ll begin,end,mid,in,i;
    begin=0;end=b-1;in=-1;
    while(begin<=end)
    {
        mid=(begin+end)/2;
        if(ar[mid]==a)
        {
            in=mid;
            end=mid-1;
        }
        else if(a<ar[mid])
            end=mid-1;
        else
            begin=mid+1;
    }
    //cout<<"a="<<a<<endl;
    //cout<<"l="<<in<<endl;
    return begin;
}

int main()
{
    ll i,j,x,y,q,k,n,l,m;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>m;
        auto x=upper_bound(ar,ar+n,m);
        auto y=lower_bound(ar,ar+n,m);
        y--;
        if(*y==0)
            cout<<"X ";
        else
            cout<<*y<<" ";
        if(*x==0)
            cout<<"X"<<endl;
        else
            cout<<*x<<endl;

    }
}
