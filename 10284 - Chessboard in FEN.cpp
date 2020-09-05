#include<bits/stdc++.h>
using namespace std;
char a[64];
void rook(int i)
{
    int row,col,r,j,c;
    row=(i/8)+1;
    col=i%8;
    if(col==0)
        {
            row--;
            col=8;
        }
    r=i-8;
    for(j=1; j<=row-1; j++)
    {
        if(isalpha(a[r]))
            break;
        else if(a[r]=='0')
        {
            a[r]='1';
        }
        r-=8;
    }
    r=i+8;
    for(j=1; j<=8-row; j++)
    {
        if(isalpha(a[r]))
            break;
        else if(a[r]=='0')
        {
            a[r]='1';
        }
        r+=8;
    }
    c=i-1;
    for(j=1; j<=col-1; j++)
    {
        if(isalpha(a[c]))
            break;
        else if(a[c]=='0')
        {
            a[c]='1';
        }
        c--;
    }
    c=i+1;
    for(j=1; j<=8-col; j++)
    {
        if(isalpha(a[c]))
            break;
        else if(a[c]=='0')
        {
            a[c]='1';
        }
        c++;
    }
}
void bishop(int i)
{
    int row,col,r,j,c;
    row=(i/8)+1;
    col=i%8;
    if(col==0)
        {
            row--;
            col=8;
        }
    int m;
    m=min(row-1,col-1);
    r=i-9;
    for(j=1; j<=m; j++)
    {
        if(isalpha(a[r]))
            break;
        else if(a[r]=='0')
        {
            a[r]='1';
        }
        r-=9;
    }
    m=min(8-row,col-1);
    r=i+7;
    for(j=1; j<=m; j++)
    {
        if(isalpha(a[r]))
            break;
        else if(a[r]=='0')
        {
            a[r]='1';
        }
        r+=7;
    }
    m=min(8-row,8-col);
    r=i+9;
    for(j=1; j<=m; j++)
    {
        if(isalpha(a[r]))
            break;
        else if(a[r]=='0')
        {
            a[r]='1';
        }
        r+=9;
    }
    m=min(row-1,8-col);
    r=i-7;
    for(j=1; j<=m; j++)
    {
        if(isalpha(a[r]))
            break;
        else if(a[r]=='0')
        {
            a[r]='1';
        }
        r-=7;
    }
}
void king(int i)
{
    if(a[i+1]=='0'&&i<=63&&i%8!=0)
        a[i+1]='1';
    if(a[i-1]=='0'&&i>=2&&i%8!=1)
        a[i-1]='1';
    if(a[i+8]=='0'&&i<=56)
        a[i+8]='1';
    if(a[i-8]=='0'&&i>=9)
        a[i-8]='1';
    if(a[i+9]=='0'&&i<=55&&i%8!=0)
        a[i+9]='1';
    if(a[i-9]=='0'&&i>=10&&i%8!=1)
        a[i-9]='1';
    if(a[i+7]=='0'&&i<=57&&i%8!=1)
        a[i+7]='1';
    if(a[i-7]=='0'&&i>=9&&i%8!=0)
        a[i-7]='1';
}
void queen(int i)
{
    int row,col,r,j,c;
    row=(i/8)+1;
    col=i%8;
    if(col==0)
        {
            row--;
            col=8;
        }
    r=i-8;
    for(j=1; j<=row-1; j++)
    {
        if(isalpha(a[r]))
            break;
        else if(a[r]=='0')
        {
            a[r]='1';
        }
        r-=8;
    }
    r=i+8;
    for(j=1; j<=8-row; j++)
    {
        if(isalpha(a[r]))
            break;
        else if(a[r]=='0')
        {
            a[r]='1';
        }
        r+=8;
    }
    c=i-1;
    for(j=1; j<=col-1; j++)
    {
        if(isalpha(a[c]))
            break;
        else if(a[c]=='0')
        {
            a[c]='1';
        }
        c--;
    }
    c=i+1;
    for(j=1; j<=8-col; j++)
    {
        if(isalpha(a[c]))
            break;
        else if(a[c]=='0')
        {
            a[c]='1';
        }
        c++;
    }
    int m;
    m=min(row-1,col-1);
    r=i-9;
    for(j=1; j<=m; j++)
    {
        if(isalpha(a[r]))
            break;
        else if(a[r]=='0')
        {
            a[r]='1';
        }
        r-=9;
    }
    m=min(8-row,col-1);
    r=i+7;
    for(j=1; j<=m; j++)
    {
        if(isalpha(a[r]))
            break;
        else if(a[r]=='0')
        {
            a[r]='1';
        }
        r+=7;
    }
    m=min(8-row,8-col);
    r=i+9;
    for(j=1; j<=m; j++)
    {
        if(isalpha(a[r]))
            break;
        else if(a[r]=='0')
        {
            a[r]='1';
        }
        r+=9;
    }
    m=min(row-1,8-col);
    r=i-7;
    for(j=1; j<=m; j++)
    {
        if(isalpha(a[r]))
            break;
        else if(a[r]=='0')
        {
            a[r]='1';
        }
        r-=7;
    }

}
void night(int i)
{
    int row,col;
    row=(i/8)+1;
    col=i%8;
    if(col==0)
        {
            row--;
            col=8;
        }
    if(a[i+6]=='0'&&row<=7&&col>=3)
        a[i+6]='1';
    if(a[i-6]=='0'&&row>=2&&col<=6)
        a[i-6]='1';
    if(a[i+10]=='0'&&row<=7&&col<=6)
        a[i+10]='1';
    if(a[i-10]=='0'&&row>=2&&col>=3)
        a[i-10]='1';
    if(a[i+15]=='0'&&row<=6&&col>=2)
        a[i+15]='1';
    if(a[i-15]=='0'&&row>=3&&col<=7)
        a[i-15]='1';
    if(a[i+17]=='0'&&row<=6&&col<=7)
        a[i+17]='1';
    if(a[i-17]=='0'&&row>=3&&col>=2)
        a[i-17]='1';
}
void bpawn(int i)
{
    if(a[i+7]=='0'&&i<=56&&i%8!=1)
        a[i+7]='1';
    if(a[i+9]=='0'&&i<=56&&i%8!=0)
        a[i+9]='1';
}
void wpawn(int i)
{
    if(a[i-7]=='0'&&i>=9&&i%8!=0)
        a[i-7]='1';
    if(a[i-9]=='0'&&i>=9&&i%8!=1)
        a[i-9]='1';
}
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int i,j,k,l,x,count,m;
    string s;
    while(cin>>s)
    {
        count=0;
        k=1;
        for(i=0; i<s.length(); i++)
        {
            if(s[i]=='/')
                continue;
            else if(isdigit(s[i]))
            {
                x=s[i]-'0';
                for(j=0; j<x; j++)
                {
                    a[k]='0';
                    k++;
                }
            }
            else if(isalpha(s[i]))
            {
                a[k]=s[i];
                k++;
            }
        }
            for(l=1; l<=64; l++)
            {
                if(a[l]=='r'||a[l]=='R')
                {
                    rook(l);

                }
                else if(a[l]=='b'||a[l]=='B')
                {
                    bishop(l);

                }
                else if(a[l]=='k'||a[l]=='K')
                {
                    king(l);
                }


                else if(a[l]=='q'||a[l]=='Q')
                {
                    queen(l);

                }

                else if(a[l]=='n'||a[l]=='N')
                {
                    night(l);

                }
                else if(a[l]=='p')
                {
                    bpawn(l);

                }
                else if(a[l]=='P')
                {
                    wpawn(l);

                }
            }
            for(l=1; l<=64; l++)
                if(a[l]=='0')
                count++;
        cout<<count<<endl;
    }

}
