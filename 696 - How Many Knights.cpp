#include<bits/stdc++.h>

using namespace std;

int main()
{
   long long row,col,m,c,d,t;
   while(cin>>row>>col)
   {
       if(row==0&& col==0)
        break;
       else
       {
           if(row*col<=4)
           {
               cout<<row*col<<" knights may be placed on a "<<row<<" row "<<col<<" column board."<<endl;
           }
           else if(row==1||col==1)
           {
               cout<<row*col<<" knights may be placed on a "<<row<<" row "<<col<<" column board."<<endl;
           }
           else if(row==2||col==2)
           {
               m=max(row,col);
               c=(m%4==0)?m/4:(m/4)+1;
               d=((m-1)%4==0)?(m-1)/4:(m-1)/4+1;
               t=2*(c+d);
               cout<<t<<" knights may be placed on a "<<row<<" row "<<col<<" column board."<<endl;
           }
           else
           {
               cout<<ceil((float)(row*col)/2)<<" knights may be placed on a "<<row<<" row "<<col<<" column board."<<endl;
           }
       }
   }
}
