#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,a[1001],p,n,s,c=0,i;
    while(cin>>m && m!=0)
    {
        s=0;
        p=0;
        n=0;
        c++;
        for(i=0;i<m;i++)
        {
            cin>>a[i];
            if(a[i]>0)
                p++;
            else if(a[i]==0)
                n++;
        }
        s=p-n;
        printf("Case %d: %d\n",c,s);
    }
}

