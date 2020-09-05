#include<bits/stdc++.h>

using namespace std;
int a[200];
int main()
{
    int t,x,i;
    string s;
    char c;
    cin>>t;
    getchar();
    while(t--)
    {
        getline(cin,s);
        a['F']=0;
        a['M']=0;
        x=s.length();
        for(i=0;i<x;i++)
        {
            c=s[i];
            a[c]++;
        }
        if(a['F']==a['M']&&a['F']>1)
            printf("LOOP\n");
        else
            printf("NO LOOP\n");
    }
}
