#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long min,i,j,k,l,t,sd,sy,ed,ey,leap,x,f;//sd=starting day ey=endinf year
    string s1,s2;
    char c;
    map<string,int>mp;
    mp["January"]=1;
    mp["February"]=2;
    mp["March"]=3;
    mp["April"]=4;
    mp["May"]=5;
    mp["June"]=6;
    mp["July"]=7;
    mp["August"]=8;
    mp["September"]=9;
    mp["October"]=10;
    mp["November"]=11;
    mp["December"]=12;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        leap=0;
        f=0;
        cin>>s1>>sd>>c>>sy;
        cin>>s2>>ed>>c>>ey;
        if(mp[s1]>2)
            sy++;
        if((mp[s2]==2&&ed<29)||mp[s2]<1)
            ey--;
        leap=ey/4-(sy-1)/4-ey/100+(sy-1)/100+ey/400-(sy-1)/400;
        cout<<"Case "<<i<<": "<<leap<<endl;

    }

}
