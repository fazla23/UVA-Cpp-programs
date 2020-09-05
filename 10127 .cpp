#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,i,j,k,c=1;
    while(scanf("%lld",&n)==1)
    {
        c=1;
        for(i=1;i%n!=0;i=i*10+1)
        {


            c+=1;
        }
        printf("%lld\n",c);
    }
}
