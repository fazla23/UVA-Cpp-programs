#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,r[1000],t,max,c=0;
    char s[10][1000];
    cin>>t;
    while(t--)
    {
        c++;
        scanf("%s %d",s[0],&r[0]);
        max=r[0];
        for(i=1;i<10;i++)
        {
            scanf("%s %d",s[i],&r[i]);
            if(r[i]>max)
                max=r[i];
        }
        printf("Case #%d:\n",c);
        for(i=0;i<10;i++)
        {
            if(max==r[i])
            {
                puts(s[i]);
            }
        }
    }
}
