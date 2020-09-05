#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,c,i,j,k,l,count,x,y;
    while(cin>>a>>c)
    {
        count=0;
        if(a==0 && c==0)
            break;
        else
        {
            cin>>x;
            c--;
            count+=(a-x);
            while(c--)
            {
                cin>>y;
                if(x>y)
                count+=(x-y);
                x=y;
            }
            cout<<count<<endl;
        }
    }
}
