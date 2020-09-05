#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t,a,b,c,x;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        x=(c*(a+(a-b)))/(a+b);
        if(x<=0)
            printf("0\n");
        else
            printf("%d\n",x);
    }
}
