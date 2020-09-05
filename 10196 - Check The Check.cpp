#include<bits/stdc++.h>
using namespace std;
long long bkc,wkc;
char ar[8][8];
int wpawncheck(long long row,long long col)
{
    if(ar[row-1][col-1]=='p'||ar[row-1][col+1]=='p')
        return 1;
    else
        return 0;
}
int bpawncheck(long long row,long long col)
{
    if(ar[row+1][col-1]=='P'||ar[row+1][col+1]=='P')
        return 1;
    else
        return 0;
}
int wrookcheck(long long row,long long col)
{
    int r=row,check=0,c=col;
    while(r!=0)
    {
        r--;
        if(isupper(ar[r][col])||ar[r][col]=='b'||ar[r][col]=='n' ||ar[r][col]=='k' ||ar[r][col]=='p' )
            break;
        else if(ar[r][col]=='r'||ar[r][col]=='q')
            return 1;
    }
    r=row;
    while(r!=9)
    {
        r++;
        if(isupper(ar[r][col])||ar[r][col]=='b'||ar[r][col]=='n' ||ar[r][col]=='k' ||ar[r][col]=='p')
            break;
        else if(ar[r][col]=='r'||ar[r][col]=='q')
            return 1;
    }
    c=col;
    while(c!=9)
    {
        c++;
        if(isupper(ar[row][c])||ar[row][c]=='b'||ar[row][c]=='n' ||ar[row][c]=='k' ||ar[row][c]=='p')
            break;
        else if(ar[row][c]=='r'||ar[row][c]=='q')
            return 1;
    }
    c=col;
    while(c!=0)
    {
        c--;
        if(isupper(ar[row][c])||ar[row][c]=='b'||ar[row][c]=='n' ||ar[row][c]=='k' ||ar[row][c]=='p')
            break;
        else if(ar[row][c]=='r'||ar[row][c]=='q')
            return 1;
    }
    return 0;
}
int brookcheck(long long row,long long col)
{
    int r=row,c=col;
    while(r!=0)
    {
        r--;
        if(islower(ar[r][col])||ar[r][col]=='B'||ar[r][col]=='N' ||ar[r][col]=='K' ||ar[r][col]=='P')
            break;
        else if(ar[r][col]=='R'||ar[r][col]=='Q')
            return 1;
    }
    r=row;
    while(r!=9)
    {
        r++;
        if(islower(ar[r][col])||ar[r][col]=='B'||ar[r][col]=='N' ||ar[r][col]=='K' ||ar[r][col]=='P')
            break;
        else if(ar[r][col]=='R'||ar[r][col]=='Q')
            return 1;
    }
    c=col;
    while(c!=9)
    {
        c++;
        if(islower(ar[row][c])||ar[row][c]=='B'||ar[row][c]=='N' ||ar[row][c]=='K' ||ar[row][c]=='P')
            break;
        else if(ar[row][c]=='R'||ar[row][c]=='Q')
            return 1;
    }
    c=col;
    while(c!=0)
    {
        c--;
        if(islower(ar[row][c])||ar[row][c]=='B'||ar[row][c]=='N' ||ar[row][c]=='K' ||ar[row][c]=='P')
            break;
        else if(ar[row][c]=='R'||ar[row][c]=='Q')
            return 1;
    }
    return 0;
}
int wbishopcheck(long long row,long long col)
{
    int r=row,c=col;
    while(r!=0&&c!=0)
    {
        r--;c--;
        if(isupper(ar[r][c])||ar[r][c]=='r'||ar[r][c]=='n' ||ar[r][c]=='k' ||ar[r][c]=='p')
            break;
        else if(ar[r][c]=='b'||ar[r][c]=='q')
            return 1;
    }
    r=row;c=col;
    while(r!=0&&c!=9)
    {
        r--;c++;
        if(isupper(ar[r][c])||ar[r][c]=='r'||ar[r][c]=='n' ||ar[r][c]=='k' ||ar[r][c]=='p')
            break;
        else if(ar[r][c]=='b'||ar[r][c]=='q')
            return 1;
    }
    c=col;r=row;
    while(c!=9&&r!=9)
    {
        c++;r++;
        if(isupper(ar[r][c])||ar[r][c]=='r'||ar[r][c]=='n' ||ar[r][c]=='k' ||ar[r][c]=='p')
            break;
        else if(ar[r][c]=='b'||ar[r][c]=='q')
            return 1;
    }
    c=col;r=row;
    while(c!=0&&r!=9)
    {
        c--;r++;
        if(isupper(ar[r][c])||ar[r][c]=='r'||ar[r][c]=='n' ||ar[r][c]=='k' ||ar[r][c]=='p')
            break;
        else if(ar[r][c]=='b'||ar[r][c]=='q')
            return 1;
    }
    return 0;
}
int bbishopcheck(long long row,long long col)
{
    int r=row,c=col;
    while(r!=0&&c!=0)
    {
        r--;c--;
        if(islower(ar[r][c])||ar[r][c]=='R'||ar[r][c]=='N' ||ar[r][c]=='K' ||ar[r][c]=='P')
            break;
        else if(ar[r][c]=='B'||ar[r][c]=='Q')
            return 1;
    }
    r=row;c=col;
    while(r!=0&&c!=9)
    {
        r--;c++;
        if(islower(ar[r][c])||ar[r][c]=='R'||ar[r][c]=='N' ||ar[r][c]=='K' ||ar[r][c]=='P')
            break;
        else if(ar[r][c]=='B'||ar[r][c]=='Q')
            return 1;
    }
    c=col;r=row;
    while(c!=9&&r!=9)
    {
        c++;r++;
        if(islower(ar[r][c])||ar[r][c]=='R'||ar[r][c]=='N' ||ar[r][c]=='K' ||ar[r][c]=='P')
            break;
        else if(ar[r][c]=='B'||ar[r][c]=='Q')
            return 1;
    }
    c=col;r=row;
    while(c!=0&&r!=9)
    {
        c--;r++;
        if(islower(ar[r][c])||ar[r][c]=='R'||ar[r][c]=='N' ||ar[r][c]=='K' ||ar[r][c]=='P')
            break;
        else if(ar[r][c]=='B'||ar[r][c]=='Q')
            return 1;
    }
    return 0;
}
int wknightcheck(long long row,long long col)
{
    if(ar[row-2][col-1]=='n'||ar[row-2][col+1]=='n')
        return 1;
    else if(ar[row+2][col-1]=='n'||ar[row+2][col+1]=='n')
        return 1;
    else if(ar[row-1][col-2]=='n'||ar[row-1][col+2]=='n')
        return 1;
    else if(ar[row+1][col-2]=='n'||ar[row+1][col+2]=='n')
        return 1;
    return 0;
}
int bknightcheck(long long row,long long col)
{
    if(ar[row-2][col-1]=='N'||ar[row-2][col+1]=='N')
        return 1;
    else if(ar[row+2][col-1]=='N'||ar[row+2][col+1]=='N')
        return 1;
    else if(ar[row-1][col-2]=='N'||ar[row-1][col+2]=='N')
        return 1;
    else if(ar[row+1][col-2]=='N'||ar[row+1][col+2]=='N')
        return 1;
    return 0;
}
int main()
{
    long long bk,wh,i,j,k,l,count=0,wki,bki,wkr,wkco,bkr,bkco,c=0;
    while(1)
    {
        c++;
        long long bkc=0,wkc=0;
        count=0;
        for(i=1; i<=8; i++)
        {
            for(j=1; j<=8; j++)
            {
                cin>>ar[i][j];
                if(ar[i][j]=='.')
                    count++;
                else if(ar[i][j]=='K')
                {
                    wkr=i;
                    wkco=j;
                }
                else if(ar[i][j]=='k')
                {
                    bkr=i;
                    bkco=j;
                }

            }
        }
        if(count==64)
            break;
        else
        {
            wkc=wpawncheck(wkr,wkco);
            //cout<<"wpawn"<<wkc<<endl;
            if(wkc!=1)
            {
                wkc=wrookcheck(wkr,wkco);
            }
            //cout<<"wrook"<<wkc<<endl;
            if(wkc!=1)
            {
                wkc=wbishopcheck(wkr,wkco);
            }
            //cout<<"wbishop"<<wkc<<endl;
            if(wkc!=1)
            {
                wkc=wknightcheck(wkr,wkco);
            }
            //cout<<"wknight"<<wkc<<endl;
            bkc=bpawncheck(bkr,bkco);
            if(bkc!=1)
            {
                bkc=brookcheck(bkr,bkco);
            }
            if(bkc!=1)
            {
                bkc=bbishopcheck(bkr,bkco);
            }
            if(bkc!=1)
            {
                bkc=bknightcheck(bkr,bkco);
            }
        }
        if(bkc==1)
            cout<<"Game #"<<c<<": black king is in check."<<endl;
        else if(wkc==1)
            cout<<"Game #"<<c<<": white king is in check."<<endl;
        else
            cout<<"Game #"<<c<<": no king is in check."<<endl;
    }
}
