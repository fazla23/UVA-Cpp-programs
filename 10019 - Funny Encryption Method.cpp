
#include<bits/stdc++.h>

using namespace std;
int main()

{
    int n,t,x,y,c;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n;
        x=__builtin_popcount(n);
        while(n!=0)
        {
            y=n%10;
            c=c+__builtin_popcount(y);
            n/=10;
        }
        printf("%d %d\n",x,c);
    }

}

