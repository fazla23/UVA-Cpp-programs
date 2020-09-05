
#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int t,hh,mm,x,y;
    char c;
    cin>>t;
    while(t--)
    {
        cin>>hh>>c>>mm;
        x=60-mm;
        y=12-hh-1;
        if(mm==0)
            {
                y++;
                x=0;
            }
        if(hh==12&&mm!=0)
            y=11;
        if(hh==11&&mm!=0)
            y=12;
        if(hh==12&&mm==0)
        {
            x=0;
            y=12;
        }
        printf("%02d:%02d\n",y,x);
    }
}
