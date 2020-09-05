#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    ll i,j,k,l,m,n,res=1;
    vector<int>low,high;
    string s,ss;
    while(cin>>n)
    {
        getchar();
        if(n==0)
            break;
        getline(cin,s);
        if(s=="right on")
        {
            for(i=0;i<low.size();i++)
                if(low[i]>=n)
                {
                    res=0;
                    break;
                }
            for(i=0;i<high.size();i++)
                if(high[i]<=n)
                {
                    res=0;
                    break;
                }
            if(res==1)
                cout<<"Stan may be honest"<<endl;
            else
                cout<<"Stan is dishonest"<<endl;
            res=1;
            low.clear();
            high.clear();
        }
        else
            {
                if(s=="too low")
                    low.push_back(n);
                else
                    high.push_back(n);
            }
    }
}
