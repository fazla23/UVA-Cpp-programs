
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long sh,sm,eh,em,i,j,k,l,fin,e1,s1;//s=starting hour em=ending minute

    while(cin>>sh>>sm>>eh>>em)

    {
        if(sh==0&&sm==0&&eh==0&&em==0)
            break;
        else
        {
            s1=sh*60+sm;
            e1=eh*60+em;
            if(e1<s1)
                e1+=1440;
            fin=e1-s1;
            cout<<fin<<endl;
        }
    }

}
