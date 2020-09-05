
#include<bits/stdc++.h>

using namespace std;
int main()

{
    long long int x,y,a,b,c;
    while(cin>>a>>b && a!=0&&b!=0)
    {
        x=sqrt(a);
        if(x*x==a)
            x=x-1;
        y=sqrt(b);
        printf("%lld\n",abs(y-x));
    }

}
