#include<bits/stdc++.h>

using namespace std;

int getxor(int x[],int r,int t)
{
    int g,h=0,q[10000],i;
    if(r==0 && t==1)
        return x[0]^x[1];
    else
    {
        for(g=r,i=0; g<=t-1; g++,i++)
        {
            h++;
            q[i]=x[g]^x[g+1];
        }
        return getxor(q,0,h-1);
    }
}

int main()
{
    int c=0,t,i,n,a[10000],q,x,f,y;
    cin>>t;
    while(t--)
    {
        c++;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        printf("Case %d:\n",c);
        cin>>q;
        while(q--)
        {
            cin>>x>>y;
            if(x==y)
            {
                printf("%d\n",a[x]);
            }
            else
            {
                f=getxor(a,x,y);
                printf("%d\n",f);
            }

        }
    }
}

