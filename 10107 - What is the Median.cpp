#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll i=0,j,k,l,m,n,ar[20000];
    while(cin>>ar[i])
    {
        sort(ar,ar+(i+1));
        if(i%2==0)
        {
            if(i==0)
                cout<<ar[0]<<endl;
            else
                cout<<ar[i/2]<<endl;
        }
        else
        {
            m=(i+1)/2;
            cout<<(ar[m]+ar[m-1])/2<<endl;
        }
        i++;
    }
}
