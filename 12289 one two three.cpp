#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c,t,i,l;
    char s[10];
    cin>>t;
    getchar();
    while(t--)
    {
        c=0;
        gets(s);
        l=strlen(s);
        if(l==3)
        {
            if((s[0]=='o'&&s[1]=='n')||(s[0]=='o'&&s[2]=='e')||(s[1]=='n'&&s[2]=='e'))
                printf("1\n");
            else if((s[0]=='t'&&s[1]=='w')||(s[0]=='t'&&s[2]=='o')||(s[1]=='w'&&s[2]=='o'))
                printf("2\n");
        }
        else if(l==5)
        {
                if(s[0]!='t')
                    c++;
                if(s[1]!='h')
                    c++;
                if(s[2]!='r')
                    c++;
                if(s[3]!='e')
                    c++;
                if(s[4]!='e')
                    c++;
                    if(c<=1)
            printf("3\n");

        }

    }
}
