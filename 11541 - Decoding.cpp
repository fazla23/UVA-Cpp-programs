
#include<bits/stdc++.h>

using namespace std;
int main()

{
    int l,i,d;
    char s[1000];
    int t,k=0;
    cin>>t;
    getchar();
    while(t--)
    {
        k++;
        printf("Case %d: ",k);
        char ch=getchar();
        while(ch!='\n')
        {
            cin>>d;
            for(i=1;i<=d;i++)
                cout<<ch;
            ch=getchar();
        }
        printf("\n");
    }
}

