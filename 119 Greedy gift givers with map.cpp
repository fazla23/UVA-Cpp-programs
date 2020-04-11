#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,a,b,c,i,j,k;
    string s,g;
    map<string,int> mp;
    while(cin>>x)
    {
        for(i=0;i<x;i++)
        {
            cin>>s;
            mp[s]=0;
        }
        for(i=0;i<x;i++)
        {
            cin>>g;
            cin>>b>>c;
            for(j=0;j<c;j++)
            {
                k=0;a=0;
                cin>>s;
                if(b!=0 && c!=0)
                {
                    a=b/c;
                    k=a*c;
                    mp[s]+=a;
                }
            }
            mp[g]-=k;
        }
        map<string,int>::iterator it;
        for(it=mp.begin();it!=mp.end();it++)
            cout<<it->first<<" "<<it->second<<endl;
    }
}
