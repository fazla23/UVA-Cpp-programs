#include<bits/stdc++.h>

using namespace std;
int main()

{
    long long int a,b,c,d,e,f,g,avg,i,j,t,q=0,min,ar[3],total;
    cin>>t;
    while(t--)
    {
        min=INT_MAX;
        q++;
        cin>>a>>b>>c>>d>>ar[0]>>ar[1]>>ar[2];
        for(i=0; i<3; i++)
        {
            if(ar[i]<min)
                min=ar[i];
        }
        avg=(ar[0]+ar[1]+ar[2]-min)/2;
        total=a+b+c+d+avg;
        if(total>=90)
            cout<<"Case "<<q<<": A"<<endl;
        else if(total<90&&total>=80)
            cout<<"Case "<<q<<": B"<<endl;
        else if(total<80&&total>=70)
            cout<<"Case "<<q<<": C"<<endl;
        else if(total<70&&total>=60)
            cout<<"Case "<<q<<": D"<<endl;
        else if(total<60)
            cout<<"Case "<<q<<": F"<<endl;
    }


}




