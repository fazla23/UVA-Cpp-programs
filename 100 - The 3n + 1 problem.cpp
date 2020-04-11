#include<bits/stdc++.h>

using namespace std;
long long int f(long long int a)
{
    long long int count=0;
    while(a!=1)
    {
        if(a%2==0)
            a/=2;
        else
            a=3*a+1;
            count++;
    }
    return count+1;
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    long long int i,j,m=INT_MIN,k,x,a,b;
    while(cin>>a>>b)
    {
        if(a>b)
        {
            j=a;
            i=b;
        }
        else
        {
            j=b;
            i=a;
        }

        m=INT_MIN;
        for(k=j;k>=i;k--)
        {
            x=f(k);
            if(x>m)
                m=x;
        }
        printf("%lld %lld %lld\n",a,b,m);
    }
}


