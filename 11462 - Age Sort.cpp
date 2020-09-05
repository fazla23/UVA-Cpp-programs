
#include<bits/stdc++.h>
long long int a[20000001];
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    long long int n,i;
    while(scanf("%lld",&n)&&n!=0)
    {
        for(i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
        }
        sort(a,a+n);
        printf("%lld",a[0]);
        for(i=1; i<n; i++)
        {
            printf(" %lld",a[i]);
        }
        printf("\n");
    }

}
