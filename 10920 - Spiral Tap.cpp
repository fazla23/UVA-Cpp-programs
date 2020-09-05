#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll col,root,row,i,j,k,sz,p,trow,tcol,dif;
    while(cin>>sz>>p)
    {
        root=ceil(sqrt((double)p));
        if(root%2==0)
        {
            dif=(sz-1)-root;
            trow=2+dif/2;
            tcol=1+dif/2;
        }
        else
        {
            dif=sz-root;
            trow=sz-(dif/2);
            tcol=sz-(dif/2);
        }
        if(p==1)
            {
                row=(sz/2)+1;
                col=(sz/2)+1;
            }
        else if(p==2)
            {
                row=(sz/2)+2;
                col=(sz/2)+1;
            }
        else
        {
            if(p/root==root)
            {
                if(root%2==0)
                {
                    row=trow;
                    col=tcol;
                }
                else
                {
                    row=trow;
                    col=tcol;
                }
            }
            else if(p/root==root-1)
            {
                if(root%2==0)
                {
                    if(p%root==0)
                    {
                        col=sz-((p-1)%root);
                        row=sz-(dif/2);
                    }
                    else
                    {
                        col=tcol;
                        row=trow+(root-(p%root));
                    }

                }
                else
                {
                    if(p%root==0)
                    {
                        col=(p-1)%(root-1)+1+(dif/2);
                        row=dif/2+1;
                    }
                    else
                    {
                        col=tcol;
                        row=trow-(root-(p%root));
                    }

                }
            }
            else if(p/root==root-2)
            {
                if(root%2==0)
                {
                    col=sz-(p%root)+1;
                    row=sz-(dif/2);

                }
                else
                {
                    row=dif/2+1;
                    col=(p%(root-1))+(dif/2);
                }
            }
        }
        cout<<"Line = "<<row<<", column = "<<col<<"."<<endl;
    }
}
