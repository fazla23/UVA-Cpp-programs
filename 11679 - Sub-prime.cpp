#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long ar[30],i,j,k,l,n,a,b,x,y,z,c;
    while(cin>>b>>n)
    {
        if(b==0 && n==0)
            break;
        else

        {
            c=0;
            for(i=1; i<=b; i++)
            {
                cin>>ar[i];
            }
            for(i=1; i<=n; i++)
            {
                cin>>x>>y>>z;
                ar[x]-=z;
                ar[y]+=z;
            }
            for(i=1; i<=b; i++)
            {
                if(ar[i]<0)
                {
                    c=1;
                    break;
                }
            }
            if(c==0)
                cout<<"S"<<endl;
            else
                cout<<"N"<<endl;
        }
    }
}
