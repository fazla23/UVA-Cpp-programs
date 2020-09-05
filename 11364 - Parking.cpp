#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a[101],i,min=INT_MAX,max=INT_MIN,r;
    cin>>t;
    while(t--)
    {
        min=INT_MAX;max=INT_MIN;
        r=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<min)
                min=a[i];
            if(a[i]>max)
                max=a[i];
        }
        r=2*(max-min);
        cout<<r<<endl;;
    }
}
