#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll i,j,k,l,m,n,t;
    map<char,double>mp;
    char c;
    string s;
    double sum;
    int x;
    cin>>n;
    while(n--)
    {
        cin>>k;
        for(i=0;i<k;i++)
            {
                cin>>c>>t;
                mp[c]=t;
            }
        cin>>j;
        getchar();
        sum=0;
        while(j--)
        {
            getline(cin,s);
            x=s.length();
            for(i=0;i<x;i++)
            {
                sum=sum+mp[s[i]];
            }
        }
        sum/=100;
        printf("%0.2f$\n", sum);
        mp.clear();
    }

}
