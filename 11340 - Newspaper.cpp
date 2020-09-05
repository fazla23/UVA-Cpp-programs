
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t,set=0,sum,r,size,i,j,k,l,n,ar[100],x,m,to,count;
    string s;
    map<char,int>mp;
    char c,d;
    cin>>t;
    while(t--)
    {
        to=0;
        count=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>c>>x;
            mp[c]=x;
        }
        cin>>m;
        getchar();
        while(count!=m)
        {
            d=getchar();
            if(d=='\n')
                {
                    count++;
                    //cout<<count<<endl;
                }
            else if(mp.count(d)>0)
            {
                to=to+mp[d];
            }

        }
        printf("%.2f$\n",(float)to/100.00);
        mp.clear();
    }

}
