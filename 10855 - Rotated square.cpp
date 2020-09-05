#include<bits/stdc++.h>

using namespace std;
int n,N;
char in[1000][1000];
char match[1000][1000];
char change[1000][1000];
int ar[4];

void rotate()
{
    int i,j,k,l;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            change[i][j]=match[n-j-1][i];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            match[i][j]=change[i][j];
        }
    }
}
int main()
{
    int i,j,k,l,ck,x,y,c;
    while(cin>>N>>n)
    {
        if(N==0&&n==0)
            break;
        for(i=0;i<4;i++)
            ar[i]=0;
        for(i=0; i<N; i++)
        {
            for(j=0; j<N; j++)
                cin>>in[i][j];
        }
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
            {
                cin>>match[i][j];
            }
        for(ck=0; ck<4; ck++)
        {
            for(i=0; i<N; i++)
            {
                for(j=0; j<N; j++)
                {
                    if(in[i][j]==match[0][0])
                    {
                        k=i;

                        c=1;
                        for(x=0; x<n; x++,k++)
                        {
                            if(k==N)
                            {
                                c=0;
                                break;
                            }
                            for(y=0,l=j; y<n; y++,l++)
                            {
                                if(l==N)
                                {
                                    c=0;
                                    break;
                                }
                                if(in[k][l]!=match[x][y])
                                {
                                    c=0;
                                    break;
                                }
                            }
                            if(c==0)
                                break;
                        }
                        if(c)
                        {
                            ar[ck]++;
                        }
                    }
                }
            }
            rotate();
        }
        for(i=0; i<3; i++)
            cout<<ar[i]<<" ";
        cout<<ar[3]<<endl;
    }
}
