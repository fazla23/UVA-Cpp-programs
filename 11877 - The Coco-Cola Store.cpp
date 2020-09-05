
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,k,n,a[201];
    a[1]=0;
    int x=1;
    int count=0;
    for(i=2;i<=200;i++)
    {
        a[i]=x;
        count++;
        if(count==2)
        {
            count=0;
            x++;
        }

    }
    while(cin>>t&&t!=0)
    {
        printf("%d\n",a[t]);
    }
}
