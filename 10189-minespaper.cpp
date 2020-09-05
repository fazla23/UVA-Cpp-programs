#include<bits/stdc++.h>
#define ll long long
#define valid(nx,ny) nx>=0&&nx<row && ny>=0&&ny<col
using namespace std;

int main()
{
    ll row,col,x,y,i,j,k,ln,m,c=0,nx,ny,f=1;
    char board[101][101],rse[101][101];
    while(cin>>row>>col)
    {
        if(row==0&&col==0)
            break;

        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
                cin>>board[i][j];
        }
        if(f>1)
            cout<<endl;
        cout<<"Field #"<<f<<":"<<endl;
        int fx[]= {1,-1,0,0,-1,1,-1,1};
        int fy[]= {0,0,1,-1,1,1,-1,-1};
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                c=0;
                for(k=0; k<8; k++)
                {
                    nx=fx[k]+i;
                    ny=fy[k]+j;
                    if(valid(nx,ny))
                    {
                        if(board[nx][ny]=='*')
                            c++;
                    }
                }
                if(board[i][j]=='.')
                    cout<<c;
                else
                    cout<<"*";
            }
            cout<<endl;
        }
        f++;
    }
}
