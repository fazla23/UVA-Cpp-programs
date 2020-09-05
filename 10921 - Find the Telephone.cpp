
#include<bits/stdc++.h>

using namespace std;
int main()

{

    int x,i,j,k;
    char c;
    string s;
    while(cin>>s)
    {
        string b;
        x=s.length();
        for(i=0;i<x;i++)
        {
            c=s[i];
        if(isalpha(s[i]))
        {
            if(c=='A'||c=='B'||c=='C')
                b+='2';
            else if(c=='D'||c=='E'||c=='F')
                b+='3';
            else if(c=='G'||c=='H'||c=='I')
                b+='4';
            else if(c=='J'||c=='K'||c=='L')
                b+='5';
            else if(c=='M'||c=='N'||c=='O')
                b+='6';
            else if(c=='P'||c=='Q'||c=='R'||c=='S')
                b+='7';
            else if(c=='T'||c=='U'||c=='V')
                b+='8';
            else if(c=='W'||c=='X'||c=='Y'||c=='Z')
                b+='9';
        }
        else
            b+=c;
    }
    cout<<b<<endl;

}
}

