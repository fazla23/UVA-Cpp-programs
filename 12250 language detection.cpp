
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[15];
    int c=0;

    while(gets(s))
    {
        if(s[0]=='#')
            break;
        else
        {
            c++;
            if(strcmp(s,"HELLO")==0)
                cout<<"Case "<<c<<": ENGLISH"<<endl;
            else if(strcmp(s,"HOLA")==0)
                cout<<"Case "<<c<<": SPANISH"<<endl;
            else if(strcmp(s,"HALLO")==0)
                cout<<"Case "<<c<<": GERMAN"<<endl;
            else if(strcmp(s,"BONJOUR")==0)
                cout<<"Case "<<c<<": FRENCH"<<endl;
            else if(strcmp(s,"CIAO")==0)
                cout<<"Case "<<c<<": ITALIAN"<<endl;
            else if(strcmp(s,"ZDRAVSTVUJTE")==0)
                cout<<"Case "<<c<<": RUSSIAN"<<endl;
            else
                cout<<"Case "<<c<<": UNKNOWN"<<endl;
        }
    }

}
