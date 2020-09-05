#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,k,n,a[201];
    a[1]=1;
    int x=3;
    int count=0;
    for(i=2;i<=200;i++)
    {
        a[i]=x;
        x++;
        count++;
        if(count==2)
        {
            count=0;
            x++;
        }

    }
    while(cin>>t)
    {
        printf("%d\n",a[t]);
    }
}
