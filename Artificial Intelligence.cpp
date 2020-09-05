#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int i,k=0,t,x;
    float j;
    char ch,q;
    char s;
    scanf("%d",&t);
    getchar();
    float m[200];
    while(t--)
    {
        k++;
        m['P']=0;
        m['U']=0;
        m['I']=0;
        ch=getchar();
        while(ch!='\n')
        {
            if(ch=='=')
            {
                scanf("%f",&m[q]);
                cin>>s;
                if(s=='m')
                    m[q]*=0.001;
                else if(s=='k')
                    m[q]*=1000;
                else if(s=='M')
                    m[q]*=1000000;

            }
            q=ch;
            ch=getchar();
        }
        cout<<"Problem #"<<k<<endl;
        if(m['I']==0)
        {
            printf("I=%.2fA\n",m['P']/m['U']);
        }
        else if(m['P']==0)
        {
            printf("P=%.2fW\n",m['I']*m['U']);
        }
        else if(m['U']==0)
        {
            printf("U=%.2fV\n",m['P']/m['I']);
        }
            printf("\n");
    }

}
