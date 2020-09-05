#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int t,x,y,a,b;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x>=y && (x+y)%2==0)
        {
            a=(x-y)/2;
            b=x-a;
            cout<<b<<" "<<a<<endl;
        }
        else
            cout<<"impossible\n" ;
    }
}

