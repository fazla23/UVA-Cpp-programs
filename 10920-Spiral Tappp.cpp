#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll col,root,row,i,j,k,sz,p,trow,tcol,dif;
    while(cin>>sz>>p)
    {
        if(sz==0&&p==0)
            break;
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
            if(root%2==0)
            {
                if(p>=((root*root)-(root-1)))
                {
                    if(p==sqrt((double)p)*sqrt((double)p))
                    {
                        row=trow;
                        col=tcol;
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
                        col=tcol+1;
                    else
                        col=tcol+(root-p%root)+1;
                    row=trow+(root-1);
                }
            }
            else
            {
                if(p>=((root*root)-(root-1)))
                {
                    if(p==sqrt((double)p)*sqrt((double)p))
                    {
                        row=trow;
                        col=tcol;
                    }
                    else
                    {
                        col=tcol;
                        row=trow-(root-(p%root));
                    }
                }
                 else
                {
                    if(p%root==0)
                        col=tcol-1;
                    else
                        col=tcol-(root-(p%root))-1;
                    row=trow-(root-1);
                }

            }
        }
        cout<<"Line = "<<row<<", column = "<<col<<"."<<endl;
    }
}

