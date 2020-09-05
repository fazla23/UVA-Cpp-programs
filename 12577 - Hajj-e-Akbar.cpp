#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c=0;
    char a[10];
    while(gets(a))
    {
        if(a[0]=='*')
            break;
        else
        {
            c++;
            if(strcmp(a,"Hajj")==0)
                printf("Case %d: Hajj-e-Akbar\n",c);
            else
                printf("Case %d: Hajj-e-Asghar\n",c);
        }
    }
}

