#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define READ(f) freopen("in.txt", "r", stdin)
#define WRITE(f) freopen("out.txt", "w", stdout)

int main()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    ll i,j,k,l,m,n,x,y,x1,x2,y1,y2;
    char c,ar[251][251],p,co;
    string s;
    cin>>c;
    while(1)
    {
        if(c=='I')
        {
            cin>>m>>n;
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=m; j++)
                    ar[i][j]='O';
            }
            cin>>c;
        }
        else if(c=='C')
        {
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=m; j++)
                    ar[i][j]='O';
            }
            cin>>c;
        }
        else if(c=='L')
        {
            cin>>x>>y>>co;
            ar[y][x]=co;
            cin>>c;

        }
        else if(c=='V')
        {
            cin>>x>>y1>>y2>>co;
            for(i=y1; i<=y2; i++)
                ar[i][x]=co;
            cin>>c;
        }
        else if(c=='H')
        {
            cin>>x1>>x2>>y>>co;
            for(i=x1; i<=x2; i++)
                ar[y][i]=co;
            cin>>c;
        }
        else if(c=='K')
        {
            //cout<<"k"<<endl;
            cin>>x1>>y1>>x2>>y2>>co;
            //cout<<co;
            for(i=y1; i<=y2; i++)
                for(j=x1; j<=x2; j++)
                    ar[i][j]=co;
            cin>>c;
        }
        else if(c=='F')//problmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm
        {
            cin>>x>>y>>co;
            p=ar[y][x];
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=m; j++)
                    if(ar[i][j]==p)
                        ar[i][j]=co;
            }
            cin>>c;
        }
        else if(c=='S')
        {
            cin>>s;
            cout<<s<<endl;
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=m; j++)
                    cout<<ar[i][j];
                cout<<endl;
            }
            cin>>c;
        }
        else if(c=='X')
            return 0;
        else
        {
            cout<<c<<endl;
            while(c=getchar()!='\n')
                    cin>>c;
            cin>>c;
        }
    }
}
