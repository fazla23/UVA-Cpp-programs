
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,sum,i,j,x,y,z;

    while(scanf("%d %d %d %d",&a,&b,&c,&d)==4)
    {
        sum=0;
        if(a==0&&d==0&&c==0&&b==0)
            break;
        else
        {
            x=(40-b+a);
            y=(40-b+c);
            z=(40-d+c);
            if(x>=40)
                x=x-40;
            if(y>=40)
                y=y-40;
            if(z>=40)
                z=z-40;

            sum=9*(120+x+y+z);
            printf("%d\n",sum);
        }
    }
}
