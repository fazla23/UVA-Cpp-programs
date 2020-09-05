#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
//        freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    ll i,j,k,l,n,m,tc,ar[101],a,b,c,x,y,d,flag;
    vector<int>v;
    cin>>tc;
    while(tc--)
    {
        for(i=1;i<=100;i++)
            ar[i]=i;
        cin>>a>>b>>c;
        while(b--)
        {
            cin>>x>>y;
            ar[x]=y;
        }
        v.assign(a,1);
        k=0;
        flag=0;
        while(c--)
        {
            cin>>d;
            if(flag)
                continue;
            v[k]=v[k]+d;
            if(v[k]>=100)
                v[k]=100;
            v[k]=ar[v[k]];
            if(v[k]>=100)
                {
                    v[k]=100;
                    flag=1;
                }
            k++;
            if(k==a)
                k=0;
        }
        for(i=0;i<v.size();i++)
            cout<<"Position of player "<<i+1<<" is "<<v[i]<<"."<<endl;
        v.clear();
    }

}
