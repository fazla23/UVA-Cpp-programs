#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,cd,cm,cy,bd,bm,by,i,j,k,l;//cd=current day && bm=birth month
    char x,y;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>cd>>x>>cm>>y>>cy;
        cin>>bd>>x>>bm>>y>>by;
        if(cd<bd)
            cm--;
        if(cm<bm)
            cy--;
        k=cy-by;
        if(k<0)
            cout<<"Case #"<<i<<": Invalid birth date"<<endl;
        else if(k>130)
            cout<<"Case #"<<i<<": Check birth date"<<endl;
        else
            cout<<"Case #"<<i<<": "<<k<<endl;

    }
}
