#include<bits/stdc++.h>

using namespace std;

int main()
{
    int count=0,i,k,j,t,n,a[200],b,c,x,M,J,m;
    cin>>t;
    while(t--)
    {
        count++;
        c=0;m=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            k=a[i];
            k=(k/30)+1;
            c=c+(k*10);
            x=a[i];
            x=(x/60)+1;
            m=m+(x*15);

        }
        if(c==m)
        {
            printf("Case %d: Mile Juice %d\n",count,m);
        }
        else if(c<m)
            printf("Case %d: Mile %d\n",count,c);
        else
            printf("Case %d: Juice %d\n",count,m);

    }
}

