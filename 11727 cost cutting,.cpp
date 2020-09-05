#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,t,a[3],r=1;
    cin>>t;
    while(t--)
    {
        for(i=0;i<3;i++)
        {
            cin>>a[i];
        }
        sort(a,a+3);
        printf("Case %d: %d\n",r,a[1]);

    r++;
    }
}
