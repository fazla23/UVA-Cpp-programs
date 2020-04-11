#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,t,i,j,k,l,m,c=0,sum;
    char ss;

    string s;
    while(cin>>s)
    {
        c=0;
        if(s=="#")
            break;
        x=s.length();
        for(i=0; i<x-1; i++)
        {
            if(s[i+1]>s[i])
            {
                c=1;
                next_permutation(s.begin(),s.end());
                cout<<s<<endl;
                break;
            }
        }
        if(c==0)
            cout<<"No Successor"<<endl;
    }

}
