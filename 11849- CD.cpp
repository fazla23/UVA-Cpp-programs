
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long min,i,j,k,l,m,n;
    set<int> s;
    while(cin>>m>>n)
    {
        if(n==0&& m==0)
            break;
        else
        {
            for(i=1;i<=m+n;i++)
            {
                cin>>k;
               s.insert(k);
            }
            cout<<(m+n)-s.size()<<endl;
            s.clear();
        }
    }

}
