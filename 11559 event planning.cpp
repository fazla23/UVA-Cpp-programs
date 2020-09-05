#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m,b,h,w,tk,cost[100],ar[1001],i,flag,j;
    while(scanf("%d %d %d %d",&m,&b,&h,&w)==4)
    {flag=0;
    j=0;
        while(h--)
        {
            cin>>tk;
            for(i=0; i<w; i++)
                cin>>ar[i];
            for(i=0; i<w; i++)
                if(ar[i]>=m)
                    flag=1;

            if(flag==1)
            {
                cost[j]=m*tk;
                j++;
            }
        }
        if(flag==0)
            printf("stay home\n");
        else
        {
            sort(cost,cost+j);
            if(cost[0]<=b)
                printf("%d\n",cost[0]);
            else
                printf("stay home\n");
        }

    }

}
