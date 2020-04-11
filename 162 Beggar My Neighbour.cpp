#include<bits/stdc++.h>

using namespace std;
deque<string>d,n;
stack<string>st;

int runn(int run,int ck)
{
    for(int i=1; i<=run; i++)
    {
        if(ck==1)
        {
            st.push(d.back());
            d.pop_back();
        }
        else
        {
            st.push(n.back());
            n.pop_back();
        }
    }
    if(ck==1)
    {
        while(st.size()!=0)
        {
            n.push_front(st.top());
            st.pop();
        }
        ck=1;
        return ck;
    }
    else
    {
        while(st.size()!=0)
        {
            d.push_front(st.top());
            st.pop();
        }
        ck=0;
        return ck;
    }
}
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    long long i,j,k,l;
    string s,p;
    cin>>s;
    while(s!="#")
    {
        int ck=1;
        n.push_back(s);
        for(i=1; i<=51; i++)
        {
            cin>>s;
            if(i%2==0)
                d.push_back(s);
            else
                n.push_back(s);
        }
        while(n.size()!=0&&d.size()!=0)
        {
            if(ck==1)
            {
                p=n.back();
                st.push(p);
                n.pop_back();
            }
            else
            {
                p=d.back();
                st.push(p);
                d.pop_back();
            }
            if(p[1]=='A')
            {
                ck=runn(4,ck);
            }

            else if(p[1]=='K')
            {
                ck=runn(3,ck);
            }
            else if(p[1]=='Q')
                ck=runn(2,ck);
            else if(p[1]=='J')
                ck=runn(1,ck);
            else
            {
                if(ck==1)
                {
                    st.push(n.back());
                    n.pop_back();
                    ck=0;
                }
                else
                {
                    st.push(d.back());
                    d.pop_back();
                    ck=1;
                }
            }
        }
        if(n.size()==0)
            cout<<1<<" "<<d.size()<<endl;
        else if(d.size()==0)
            cout<<2<<" "<<n.size()<<endl;
        n.clear();
        d.clear();
        while(st.size()!=0)
            st.pop();
    }

}
