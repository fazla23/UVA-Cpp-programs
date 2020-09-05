#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,a,b,x,y;
    cin>>t;
    while(t!=0){
        cin>>a>>b;
        while(t--)
        {
            cin>>x>>y;
            if(x==a||y==b)
                printf("divisa\n");
            else if(x>a&&y>b)
                printf("NE\n");
            else if(x<a&&y>b)
                printf("NO\n");
            else if(x<a&&y<b)
                printf("SO\n");
            else if(x>a&&y<b)
                printf("SE\n");
        }
        cin>>t;
    }

}
