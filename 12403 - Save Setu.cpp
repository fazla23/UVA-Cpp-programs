#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,d,sum=0;
    char a[10];
    cin>>t;
    while(t--)
    {
        scanf("%s",a);
        if(strcmp(a,"donate")==0)
        {
            cin>>d;
            sum=sum+d;
        }
        else if(strcmp(a,"report")==0)
            printf("%d\n",sum);
    }
}

