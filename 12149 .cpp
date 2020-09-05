#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long int a[101],i,j,k,l,x;
    a[0]=0;
    for(i=1;i<=100;i++)
    {
        a[i]=a[i-1]+i*i;
    }
    while(scanf("%lld",&x)&&x!=0)
    {
        printf("%lld\n",a[x]);
    }
}
