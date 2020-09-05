#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,t,n,a[1001],c=0,sum;
    float r,avg;
    cin>>t;
    while(t--)
    {
        sum=0;
        avg=0.00;
        c=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        avg=sum/n;
        for(i=0;i<n;i++)
        {
            if(a[i]>avg)
                c++;
        }
        r=(c*100.00)/(float)n;
        printf("%.3f%%\n",r);
    }
}
