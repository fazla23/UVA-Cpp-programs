#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[15][15],q[15][15];
    int x,i,j,k,y,z;
    vector<int> a;
    while(scanf("%d",&x)!=EOF)
    {
        a.assign(11,0);
        getchar();
        for(i=0; i<x; i++)
        {
            scanf("%s",s[i]);
        }
        getchar();
        for(k=0; k<x; k++)
        {
            scanf("%s %d %d",q[0],&y,&z);
            getchar();
            for(i=1; i<=z; i++)
            {
                scanf("%s",q[i]);
            }
            if(y==0)
                continue;
            else
            {
                for(i=0; i<x; i++)
                {
                    for(j=0; j<=z; j++)
                    {
                        if(strcmp(q[j],s[i])==0)
                        {
                            if(j==0)
                                a[i]=a[i]-((y/z)*z);
                            else
                                a[i]=a[i]+(y/z);
                        }
                    }
                }
            }
        }
        for(i=0; i<x; i++)
        {
            printf("%s %d\n",s[i],a[i]);
        }
        printf("\n");

        a.clear();
    }
}

