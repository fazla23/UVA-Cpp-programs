#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long i,j,k,l,t,m,n,p,q,d1,d2;
    while(cin>>m>>n>>p>>q)
    {
        if(m==0&&n==0&&p==0&&q==0)
        {
            break;
        }
        else
        {
            d1=abs(m-p);
            d2=abs(n-q);
            if(d1==0&& d2==0)
            {
                cout<<0<<endl;
            }
            else if(d1==d2||m==p||n==q)
            {
                cout<<1<<endl;
            }
            else
                cout<<2<<endl;
        }
    }

}
