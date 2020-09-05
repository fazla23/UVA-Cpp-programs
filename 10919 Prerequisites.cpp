#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long k,m,c,r,i,j,l,x,check,y;
    set<int> ms,mn;
    while(cin>>k>>m)
    {
        check=0;
        if(k==0 && m==0)
            break;
        else
        {
            for(i=1; i<=k; i++)
            {
                cin>>x;
                ms.insert(x);
            }
            for(l=1; l<=m; l++)
            {
                mn=ms;
                cin>>c>>r;
                for(j=1; j<=c; j++)
                {
                    cin>>y;
                    mn.insert(y);
                    //cout<<mn.size();
                }
                if(mn.size()>(c+k-r))
                    check=1;
                mn.clear();
            }
            if(check==1)
                cout<<"no"<<endl;
            else
                cout<<"yes"<<endl;
            ms.clear();
        }
    }
}
