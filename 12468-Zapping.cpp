#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,f;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==-1 && b==-1)
            break;
        else
        {
            if(a<b)
                f=b-a;
            else
                f=a-b;
            if(f>50)
                cout<<100-f<<endl;
            else
                cout<<f<<endl;
        }
    }
}
