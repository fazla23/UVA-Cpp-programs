
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,t,a[101],r,n=1;
    cin>>t;
    while(t--)
    {
        cin>>r;
        for(i=0;i<r;i++)
        {
            cin>>a[i];
        }
        sort(a,a+r);
        printf("Case %d: %d\n",n,a[r-1]);

    n++;
    }
}
