
#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int t,a,b,x[101],y[101],n,k;
    char s[15],v[16],u[14];
    cin>>t;
    while(t--)
    {
        k=1;
        a=0;
        cin>>n;
        while(n--)
        {
            scanf("%s",s);
            if(s[0]=='L')
                {a--;
                x[k]=-1;
                }
            else if(s[0]=='R')
                {a++;
                x[k]=1;}
            else
            {
                scanf("%s %d",y,&b);
                x[k]=x[b];
                a+=x[k];
            }
            printf("a=%lld k=%lld\n",a,k);
            k++;
        }
        printf("%lld\n",a);
    }

}

