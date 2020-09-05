#include<bits/stdc++.h>
long long int a[10000000];
using namespace std;
int main()
{


    int i,j ,k=0,t,x,b,c;

    a[0]=1;
    string s;
    while(cin>>s)
    {
        k++;
        x=s.length();
        for(i=1;i<x;i++)
        {
            if(s[i]==s[i-1])
                a[i]=a[i-1];
            else
                a[i]=a[i-1]+1;
        }
        printf("Case %d:\n",k);
        cin>>t;
        for(i=1;i<=t;i++)
        {
            cin>>b>>c;
            if(a[b]==a[c])
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
}
