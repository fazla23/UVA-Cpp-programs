
#include<bits/stdc++.h>
int a[1000000];
using namespace std;
int main()

{
    long long int i,j,k,x,y,sum;
    string s;
    while(getline(cin,s))
    {
        j=0;
        sum=0;
        x=s.length();
        if(isdigit(s[0]))
        {
            j=x-1;
            while(j>=0)
            {
                if(s[j]!='1')
                {
                    sum=(s[j-1]-'0')+((s[j]-'0')*10);
                    j-=2;
                }
                else
                {
                    sum=(s[j-2]-'0')+((s[j-1]-'0')*10)+((s[j]-'0')*100);
                    j-=3;
                }
                cout<<(char)sum;
            }
            cout<<endl;
        }
        else
        {
            for(i=x-1;i>=0;i--)
            {
                y=s[i];
                while(y!=0)
                {
                    a[j]=y%10;
                    y/=10;
                    j++;
                }
            }
            //cout<<i<<j<<x<<endl;
            for(k=0;k<j;k++)
                cout<<a[k];

        printf("\n");
        }

    }

}

