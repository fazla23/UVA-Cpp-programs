
#include<bits/stdc++.h>

using namespace std;

int f(long long int n)
{
    int sum=0;
    if(n<10)
        return n=n%10;
    else
    {
        while(n!=0)
        {
            sum=sum+n%10;
            n/=10;
        }
        return f(sum);
    }
}

int main()
{
    long long int a,b,x;
    while(scanf("%lld",&a)==1&&a!=0)
    {
        x=f(a);
        printf("%lld\n",x);
    }

}
