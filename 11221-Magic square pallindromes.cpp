#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll i,j,k,l,m,n,tc,x,t,pl,xx,len;
    string s,ss,rs;
    cin>>tc;
    getchar();
    for(t=1;t<=tc;t++)
    {
        pl=1;
        getline(cin,s);
        x=s.length();
        for(i=0;i<x;i++)
        {
            if(isalpha(s[i]))
            {
                s[i]=tolower(s[i]);
                ss+=s[i];
            }
        }
        xx=ss.length();
        len=sqrt(xx);
        if(len*len!=xx)
            pl=0;
        rs=ss;
        reverse(rs.begin(),rs.end());
        if(rs!=ss)
            pl=0;
        if(pl)
            cout<<"Case #"<<t<<":"<<endl<<len<<endl;
        else
            cout<<"Case #"<<t<<":"<<endl<<"No magic :("<<endl;
        ss.clear();
        rs.clear();
    }
}
