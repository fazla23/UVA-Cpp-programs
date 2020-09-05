#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,c,d,n,m,i,j,k,l,ar[13]={0,31,59,90,120,151,181,212,243,273,304,334,365},x,y,z,t,x1,as;
    while(cin>>a>>b>>c>>d)
    {
        if(a==0&&b==0&&c==0&&d==0)
            break;
        else
        {
            m=0;n=0;j=0;k=0;x=0;y=0;z=0;t=0,as=0;
            m=d*365+floor(d/4)-floor(d/100)+floor(d/400)+ar[c-1]+b+a;
            cout<<"m="<<m<<endl;
            n=floor(m/365);
            cout<<"n="<<n<<endl;
            j=floor(n/4)-floor(n/100)+floor(n/400);
            cout<<"j="<<j<<endl;
            k=m-j;
            cout<<"k="<<k<<endl;
            x=floor(k/365);
            if((x%4==0)&&(x%100!=0)||(x%400==0))
            {
                x1=((x-1)/4)-((x-1)/100)+((x-1)/400);
                j=x1;
                k=m-j;
                as=1;
            }
            cout<<"x="<<x<<endl;
            y=k%365;
            if(as==1&&y>60)
                y--;
            cout<<"y="<<y<<endl;
            for(i=1;i<=12;i++)
            {
                if(y<=ar[i])
                {
                    z=i;
                    if(as==1)
                    {
                        ar[2]=60;
                    }
                    t=y-ar[i-1];
                    break;
                }
            }
            cout<<t<<" "<<z<<" "<<x<<endl;
        }
    }
}
