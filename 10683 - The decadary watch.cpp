#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    long long hh,mm,ss,cc,t;
    while(cin>>s)
    {
        hh=(s[0]-'0')*10+(s[1]-'0');
        mm=(s[2]-'0')*10+(s[3]-'0');
        ss=(s[4]-'0')*10+(s[5]-'0');
        cc=(s[6]-'0')*10+(s[7]-'0');
        t=(hh*3600+mm*60+ss)*100+cc;
        t=t*10000000;
        t=t/8640000;
        printf("%lld\n",t);
    }
}
