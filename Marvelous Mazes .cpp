#include<bits/stdc++.h>

using namespace std;
int main()

{
    int i,k,j,t=0;
    char c;
    while(1)
    {
        c=getchar();
        if(c==EOF)
            break;
        else if(isdigit(c))
        {
            t=t+(c-'0');
        }
        else if(c=='\n'||c=='!')
            printf("\n");
        else if(c=='b')
        {
            for(i=1;i<=t;i++)
                printf(" ");
            t=0;
        }
        else
        {
            for(i=1;i<=t;i++)
                printf("%c",c);
            t=0;
        }

    }

}

