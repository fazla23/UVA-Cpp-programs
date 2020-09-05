#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    long long t,i,j,k=0,l,n,ar[100000],x,c;
    char s[1000001];
    cin>>t;
    getchar();

    while(t--)
    {
        k++;
        for(i=0;i<100;i++)
            ar[i]=0;
        c=0;
        scanf("%s", &s);
        x=strlen(s);
        for(j=0;j<x;j++)
        {
            if(s[j]=='<')
            {
                c--;
                if(c==-1)
                    c=99;
            }
            else if(s[j]=='>')
            {
                c++;
                if(c==100)
                    c=0;
            }
            else if(s[j]=='+')
            {
                ar[c]++;
                if(ar[c]==256)
                    ar[c]=0;
            }
            else if(s[j]=='-')
            {
                ar[c]--;
                if(ar[c]==-1)
                    ar[c]==255;
            }
        }
        cout<<"Case "<<k<<":";
        for(i=0;i<100;i++)
            printf(" %02X",ar[i]);
        cout<<endl;
    }
}
