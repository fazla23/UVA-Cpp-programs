#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    long long int leapc,year,a,b,c,d,n,m,i,j,k,l,leap,fday,lday,day,mon,ar[13]= {0,31,59,90,120,151,181,212,243,273,304,334,365},x,y,z,t,x1,as,
            lar[13]= {0,31,60,91,121,152,182,213,244,274,305,335,366};
    while(cin>>a>>b>>c>>d)
    {
        if(a==0&&b==0&&c==0&&d==0)
            break;
        else
        {
            m=0;
            n=0;
            j=0;
            k=0;
            x=0;
            y=0;
            z=0;
            t=0,as=0;
            if((c>2))
                x=d;
            else
                x=d-1;
            leap=(x/4)-(x/100)+(x/400);
            fday=d*365+ar[c-1]+b;
            lday=fday+a+leap;
            m=(97*lday)/146097;
            n=lday-m;
            n/=365;
            n--;
            leapc=(n/4)-(n/100)+(n/400);
            n++;
            day=(lday-leapc)%365;
            if(day==0)
            {
                day=365;
                n--;
            }
            for(i=0; i<13; i++)
            {
                if (((n%4==0) && (n%100!=0)) ||(n%400==0))
                {
                    if(lar[i]>=day)
                    {
                        day=day-lar[i-1];
                        mon=i;
                        break;
                    }
                }
                else
                {
                    if(ar[i]>=day)
                    {
                        day=day-ar[i-1];
                        mon=i;
                        break;
                    }
                }
            }
            printf("%lld %lld %04lld\n",day,mon,n);

        }
    }
}

