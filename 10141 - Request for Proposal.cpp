#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    long long  int n,p,r,i,j,k,l,c,max=INT_MIN,t=0;
    double d;
    string s,f,g,v;
    map<string,int> mp;
    map<string,int> mn;

    while(scanf("%lld%lld",&n,&p)==2)
    {
        if(n==0 && p==0)
        break;
        if(t>0)
            cout<<endl;
        getchar();
        t++;
        for(i=0;i<n;i++)
        {
            getline(cin,s);
            mp[s]=i;
        }
        for(k=1;k<=p;k++)
        {
            c=0;
            getline(cin,f);
            if(k==1)
                v=f;
            cin>>d>>r;
            mn[f]=d;
            getchar();
            for(j=1;j<=r;j++)
            {
                getline(cin,g);
                if(mp.count(g)>0)
                    c++;
            }
            c=c/n;
            if(c==max&&mn[f]<mn[v])
            {
                v=f;
            }
            else if(c>max)
            {
                max=c;
                v=f;
            }
        }
        cout<<"RFP #"<<t<<endl<<v<<endl;
        mp.clear();
        mn.clear();
    }
}
