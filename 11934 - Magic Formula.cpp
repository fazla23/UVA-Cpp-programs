#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,c,d,l,count,i,x;
    while(cin>>a>>b>>c>>d>>l)
    {
        count=0;
        if(a==0&&b==0&&c==0&&d==0&&l==0)
            break;
        else
        {

            for(i=0;i<=l;i++)
            {
                x=a*i*i+b*i+c;
                if(x%d==0)
                    count++;
            }
        }
        cout<<count<<endl;
    }
}
