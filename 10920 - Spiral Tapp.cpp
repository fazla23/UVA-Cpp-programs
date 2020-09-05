#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll sz,p,i,j,k,l,m,n,cf,rf,rr,rrr,r1,c1,x;
    double xx;
    cin>>sz>>p;
    if(sz==1)
        printf("Line = %ld, column = %ld.",1,1);
    else
    {
        xx=ceil(sqrt(p));
        x=xx;
        r1=(sz/2)+1;c1=(sz/2)+1;
        if(p>(x*x)-x)
        {
            cf=c1+((sz-1)/2);
            rr=(p%x)+1;
            if(p==(x*x)-(x/2))
                rf=r1;
            else if(p>(x*x)-(x/2))
            rf=r1+(((x+1)/2)-rr);
            else
                rf=r1+(rr-((x+1)/2));
            printf("Line = %lld, column = %lld.",rf,cf);
        }
    }
    return main();
}
