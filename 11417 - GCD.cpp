
#include<bits/stdc++.h>

using namespace std;

int gcd(int i,int j)
{
    if(i%j==0)
        return j;
    else
        return gcd(j,i%j);
}

int main()
{
    long long int G,N,i,j;
    while(cin>>N&& N!=0)
    {

        G=0;
        for(i=1; i<N; i++)
            for(j=i+1; j<=N; j++)
            {
                G+=gcd(i,j);
            }
            printf("%lld\n",G);
    }
}
