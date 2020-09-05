#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll i,j,k,l,m,n,r;
    string s;
    while(cin>>n)
    {
        ll top=1,bottom=6,north=2,south=5,west=3,east=4;
        if(n==0)
            break;
        while(n--)
        {
            cin>>s;
            r=top;
            if(s=="north")
            {
                top=south;
                south=bottom;
                bottom=north;
                north=r;
            }
            else if(s=="south")
            {
                top=north;
                north=bottom;
                bottom=south;
                south=r;
            }
            else if(s=="east")
            {
                top=west;
                west=bottom;
                bottom=east;
                east=r;
            }
            else if(s=="west")
            {
                top=east;
                east=bottom;
                bottom=west;
                west=r;
            }
        }
        cout<<top<<endl;
    }
}
