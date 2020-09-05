#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k,l,m,c,sum;
    int ar[3][3],g[3][3];
    cin>>t;
    while(t--)
    {
        for(i=0;i<3;i++)
            for(j=0;j<3;j++)
                scanf("%1d",&ar[i][j]);
        sum=0;
        c=-1;
        for(i=0;i<3;i++)
                for(j=0;j<3;j++)
                    sum+=ar[i][j];
        while(sum!=0)
        {
            sum=0;
            c++;
            g[0][0]=(ar[0][1]+ar[1][0])%2;
            g[0][1]=(ar[0][0]+ar[1][1]+ar[0][2])%2;
            g[0][2]=(ar[0][1]+ar[1][2])%2;
            g[1][0]=(ar[0][0]+ar[1][1]+ar[2][0])%2;
            g[1][1]=(ar[0][1]+ar[1][0]+ar[2][1]+ar[1][2])%2;
            g[1][2]=(ar[0][2]+ar[1][1]+ar[2][2])%2;
            g[2][0]=(ar[1][0]+ar[2][1])%2;
            g[2][1]=(ar[2][0]+ar[1][1]+ar[2][2])%2;
            g[2][2]=(ar[1][2]+ar[2][1])%2;
            for(i=0;i<3;i++)
                for(j=0;j<3;j++)
                    ar[i][j]=g[i][j];
            for(i=0;i<3;i++)
                for(j=0;j<3;j++)
                    sum+=ar[i][j];
        }
        cout<<c<<endl;
    }
}
