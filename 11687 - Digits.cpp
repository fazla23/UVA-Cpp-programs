#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,i,j,k,t,r,a;
    string s;
    while(cin>>s)
    {
        x=s.length();
        if(s=="END")
            break;
        else if(x==1)
        {
            if(s[0]-48==1)
                cout<<"1"<<endl;
            else
                cout<<"2"<<endl;
        }
        else if(x>=2&&x<=9)
            cout<<"3"<<endl;
        else
            cout<<"4"<<endl;
    }
}
