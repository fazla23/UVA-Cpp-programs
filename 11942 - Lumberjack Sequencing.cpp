#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,h=0,a[51],i,k,c=0,l=0,j=0;
    cin>>t;
    k=t-1;
    while(t--)
    {
        j=0;
        for(i=0; i<10; i++)
        {
            cin>>a[i];
        }
        if(a[0]<a[1])
        {
            for(i=1; i<9; i++)
            {
                if(a[i]<a[i+1])
                    j++;
                else
                    break;
            }
        }
        else if(a[0]>a[1])
        {
            for(i=1; i<9; i++)
            {
                if(a[i]>a[i+1])
                    j++;
                else
                    break;
            }
        }
        if(k==t)
            printf("Lumberjacks:\n");
        if(j==8)
            printf("Ordered\n");
        else
            printf("Unordered\n");
    }

}

