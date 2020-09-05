#include<bits/stdc++.h>

using namespace std;
int main()
{
    char s[20][20];
    strcpy(s[0],"Happy");strcpy(s[1],"birthday");strcpy(s[2],"to");strcpy(s[3],"you!");
    strcpy(s[4],"Happy") ;strcpy(s[5],"birthday") ;strcpy(s[6],"to") ;strcpy(s[7],"you!");
    strcpy(s[8],"Happy") ;strcpy(s[9],"birthday") ;strcpy(s[10],"to") ;strcpy(s[11],"Rujia!");
    strcpy(s[12],"Happy") ;strcpy(s[13],"birthday") ;strcpy(s[14],"to") ;strcpy(s[15],"you!!!");
    int n,i,j,k,count=0,x;
    char name[101][101];
    cin>>n;
    getchar();
    for(i=0;i<n;i++)
        {
            gets(name[i]);
        }
    if(n>16)
        x=((n/16)+1)*16;
    else
        x=16;

        for(j=0;j<x;j++)
        {
            printf("%s: %s\n",name[count],s[j%16]);
            count++;
            if(count==n)
            {
                count=0;
            }
        }


}

