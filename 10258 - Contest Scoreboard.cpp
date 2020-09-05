#include<bits/stdc++.h>

using namespace std;
struct c{
    int co,pb,t,total=0,sol,in,i;
    char c;
    int a[101];
};
map<int,struct c>mp;
map<int,struct c>::iterator it;
map<int,map<int,int>>
bool comp(c a,c b)
{
    if(a.sol!=b.sol)
        return a.sol>b.sol;
    if(a.total!=b.total)
        return a.total>b.total;
    else
        a.co>b.co;
}
int main()
{
    int con,prob,tm,t,i,j,k,l;
    string s;
    char L;
    cin>>t;
    struct c a[10000];
    getchar();
    getchar();
    while(t--)
    {
        i=0;
        while(getline(cin,s)&&s.length())
        {
            stringstream ss;
            ss<<s;
            ss>>con>>prob>>tm>>L;
            mp[con].co=con;
            mp[con].pb=prob;
            mp[con].t=tm;
            mp[con].c=L;
            if(mp[con].c=='I')
                {
                    mp[con].a[prob]=mp[con].a;
                }
            else if(mp[con].c=='C')
            {
                mp[con].sol++;
                mp[con].total=mp[con].t+mp[con].a[prob];
            }
        }
       for(it=mp.begin();it!=mp.end();it++)
       {
           a[i]=it->second;
           i++;
       }
       sort(a,a+i,comp);
       for(j=0;j<i;j++)
       {
           cout<<a[j].co<<" "<<a[j].sol<<" "<<a[j].total<<endl;
       }
    }
}
