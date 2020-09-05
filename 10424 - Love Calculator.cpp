#include<bits/stdc++.h>

using namespace std;
int digit(int n)
{
    int s=0;
    if(n/10==0)
        return n;
    else
    {
        while(n!=0)
        {
            s=s+n%10;
            n/=10;
        }
        return digit(s);
    }
}

int lsum(char s[100])
{
    int i,k,sum=0,x;
    k=strlen(s);
    for(i=0; i<k; i++)
    {
        if(isalpha(s[i]))
        {
            if(isupper(s[i]))
                s[i]=tolower(s[i]);
            sum=sum+(s[i]%96);
        }
    }
    return digit(sum);
}
int main()
{
    int x,a,b,c,i,j,k,y;
    float z;
    char s[100],p[100];
    while(gets(s))
    {
        x=lsum(s);
        gets(p);
        y=lsum(p);
        if(x<=y)
            z=x/(float)y;
        else
            z=y/(float)x;
        printf("%.2f %%\n",z*100);

    }

}
