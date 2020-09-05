#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x=0,c=0,y;
    while(cin>>n&&n>0)
    {
        c++;
        x=0;
        if(n==1)
            printf("Case %d: 0\n",c);
        else if(n==2)
            printf("Case %d: 1\n",c);
        else
        {
            y=__builtin_popcount(n);
            while(n!=0)
            {
                n/=2;
                x++;
            }

            if(y==1)
            printf("Case %d: %d\n",c,x-1);
            else

            printf("Case %d: %d\n",c,x);
        }
    }
}
