#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y,z,c=0;
    cin>>t;
    while(t--)
    {
        c++;
        cin>>x>>y>>z;
        if(x<=20&&y<=20&&z<=20)
           printf("Case %d: good\n",c);
        else
            printf("Case %d: bad\n",c);
    }
}
