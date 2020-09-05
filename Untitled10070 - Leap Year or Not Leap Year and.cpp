#include<bits/stdc++.h>

using namespace std;
int div4(string f)
{
    int x,y;
    x=f.length();
    y=f[x-1]-'0'+10*(f[x-2]-'0');
    if(y%4==0)
        return 1;
    else
        return 0;
}
int div3(int a)
{
    if(a%3==0)
        return 1;
    else
        return 0;
}
int div11(int a,int b)
{
    int x=a-b;
    if(x%11==0)
        return 1;
    else
        return 0;
}
int div100(string f)
{
    int x,y;
    x=f.length();
    y=f[x-1]-'0'+10*(f[x-2]-'0');
    if(y==0)
        return 1;
    else
        return 0;
}
int div400(string f)
{
    int x,y;
    x=f.length();
    y=f[x-1]-'0'+10*(f[x-2]-'0');
    if(y!=0)
        return 0;
    else
        {
            y=f[x-3]-'0'+10*(f[x-4]-'0');
            if(y%4==0)
                return 1;
            else
                return 0;
        }
}
int div5(string f)
{
    int x;
    x=f.length();
    if((f[x-1]-'0')==0||(f[x-1]-'0')==5)
        return 1;
    else
        return 0;
}
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    long long x,c,b,t=0,i,j,k,l,e,o,to,d,f;
    string s;
    while(cin>>s)
    {
        e=0;o=0,to=0;
        f=0;c=0;d=0;

        if(t>0)
            cout<<endl;
        t++;
        x=s.length();
        for(i=0;i<x;i++)
        {
            b=s[i]-'0';
            if(i%2==0)
                e+=b;
            else
                o+=b;
            to+=b;
        }
        if(div4(s)==1&&div100(s)==0||div400(s)==1)
        {
            cout<<"This is leap year."<<endl;
            c=1;
        }
        if(div3(to)==1&& div5(s)==1)
        {
            cout<<"This is huluculu festival year."<<endl;
            f=1;
        }
        if(c==1&&div5(s)==1&&div11(e,o)==1)
        {
            cout<<"This is bulukulu festival year."<<endl;
            d=1;
        }
        if(f==0&&c==0&&d==0)
            cout<<"This is an ordinary year."<<endl;
    }
}
