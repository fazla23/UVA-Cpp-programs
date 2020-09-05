#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,i,q,j,k,min,b,c,l,d,f;
    string s;
    while(cin>>l)
    {
        min=INT_MAX;
        d=0;
        f=0;
        q=0;
        b=0;
        c=0;
        if(l==0)
            break;
        else
        {
            cin>>s;
            for(i=0 ; i<l; i++)
            {
                if(s[i]=='Z')
                {
                    min=0;
                    break;
                }
                else if(s[i]=='R')
                {
                    b=i;
                    f=1;
                }
                else if(s[i]=='D')
                {
                    c=i;
                    d=1;
                }
                if(d&&f)
                    q=abs(b-c);
                if(q<min&&q>0)
                    {
                        min=q;
                        //printf("min=%d",min);

                    }
                //cout<<"b="<<b<<endl<<"c="<<c<<endl<<"i="<<i<<endl<<"q="<<q<<endl;
            }
            printf("%lld\n",min);
        }
    }

}
