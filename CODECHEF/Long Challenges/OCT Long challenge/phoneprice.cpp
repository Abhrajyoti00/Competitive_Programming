#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,c=0,s=0,j;
    cin>>t;
    while(t--)
    {
        s=1;c=0;
        cin>>n;
        int p[n];

        for(i=0;i<n;i++)
            cin>>p[i];

       // if(n>5)
       // {
            for(i=1;i<n;i++)
            {
                if((p[i]<p[i-1])&&(p[i]<p[i-2])&&(p[i]<p[i-3])&&(p[i]<p[i-4])&&(p[i]<p[i-5]))
                    s++;
            }
      //  }
        /*else if((n==2)&&(p[1]<p[0]))
            s++;
        else if ((n==3)&&(p[2]<p[1])&&(p[2]<p[0]))
            s++;
        else if((n==4)&&(p[3]<p[2])&&(p[3]<p[1])&&(p[3]<p[0]))
            s++; */

       cout<<s<<endl;
    }
    return 0;
}
