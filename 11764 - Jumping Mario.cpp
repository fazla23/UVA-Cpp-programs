#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,h=0,a[51],i,j,k,c=0,l=0;
    cin>>t;
    while(t--)
    {
        h=0;
        l=0;
        c++;
        cin>>n;
        cin>>a[0];
        for(i=1;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<a[i-1])
                l++;
            if(a[i]>a[i-1])
                h++;
            else
                continue;
        }
        printf("Case %d: %d %d\n",c,h,l);
    }

}
