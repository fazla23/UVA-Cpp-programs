#include<bits/stdc++.h>

using namespace std;

int f91(int n)
{
    if(n>=101)
        {
            printf("n=%d\n",n);
            return n-10;
        }
    else{
            printf("n=%d\n",n);
        return f91(f91(n+11));
    }
}

int main()
{
    int n,x;
    while(scanf("%d",&n)==1&&n!=0)
    {
        x=f91(n);
        printf("%d\n",x);
    }
}
