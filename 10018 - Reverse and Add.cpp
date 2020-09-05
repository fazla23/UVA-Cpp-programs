#include<bits/stdc++.h>
#define ll long long

using namespace std;
ll rev(ll a)
{
    vector<int> v;
    ll i,x=1,num=0;
    while(a!=0)
    {
        v.push_back(a%10);
        a=a/10;
    }
    i=v.size()-1;
    while(i>=0)
    {

        num=num+(v[i]*x);
        x*=10;
        i--;
    }
    //cout<<"num"<<num<<endl;
    return num;
}
int pc(ll a)
{
    string v,vv;
    while(a!=0)
    {
        v+=a%10+48;
        a/=10;
    }
    vv=v;
    reverse(vv.begin(),vv.end());
    if(vv==v)
        return 1;
    return 0;

}
int main()
{
    ll i,j,k,l,m,n,tc,c,pcheck,newn,r;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        pcheck=c=0;
        while(pcheck!=1)
        {
            r=rev(n);
            newn=n+r;
            //cout<<"r"<<r<<endl;
            pcheck=pc(newn);
            n=newn;
            c++;
        }
        cout<<c<<" "<<n<<endl;
    }

}
