#include<bits/stdc++.h>
long long int ar[ 210000001];
using namespace std;

int main()
{
    long long int x,a,b,c,i,j,k,l;
    ar[0]=1;
    for(i=1;i<= 210000000;i++)
    {
        ar[i]=i+ar[i-1];
    }
    while(scanf("%lld",&a)&&a>=0)
    {
       cout<<ar[a]<<endl;
    }
}

