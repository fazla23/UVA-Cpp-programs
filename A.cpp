
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,i,j,k,l,ar[1000],c,d,t=0,br[1000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    br[0]=ar[0];
    for(i=1;i<n;i++)
    {
        br[i]=(br[i-1]+ar[i]);
    }
    for(i=0;i<n;i++)
        br[i]=abs(180-br[i]);
    cout<<2**min_element(br,br+n)<<endl;

}
