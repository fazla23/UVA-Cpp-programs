#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll i,j,k,l,m,x,count;
    vector<int> vv;
    while(cin>>x&&x)
    {
        count=0;
        j=x;
        while(j!=0)
        {
            vv.push_back(j%2);
            if(j%2==1)
                count++;
            j/=2;
        }
        cout<<"The parity of ";
        for(i=vv.size()-1;i>=0;i--)
        {
            cout<<vv[i];
        }
        cout<<" is "<<count<<" (mod 2)"<<endl;
        vv.clear();
    }
}
