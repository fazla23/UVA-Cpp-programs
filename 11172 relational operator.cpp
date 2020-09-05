#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>b)
            printf(">\n");
        else if(a<b)
            printf("<\n");
        else if(a==b)
            printf("=\n");

    }
return 0;
}
