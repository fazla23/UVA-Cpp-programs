#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll i,j,k,l,m,n,x;
    string s,rs,ss;
    while(getline(cin,s))
    {
        if(s=="DONE")
            break;
        x=s.length();
        for(i=0;i<x;i++)
        {
            if(isalpha(s[i]))
            {
                s[i]=tolower(s[i]);
                ss+=s[i];
            }
        }
        rs=ss;
        //cout<<ss<<endl;
        reverse(rs.begin(),rs.end());
        //cout<<rs<<endl;
        if(rs==ss)
            cout<<"You won't be eaten!"<<endl;
        else
            cout<<"Uh oh.."<<endl;
        ss.clear();
        rs.clear();
    }
}
