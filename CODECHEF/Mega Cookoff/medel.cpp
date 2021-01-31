#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,l,s,pl=0,sl=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
       if(n>=3)
       {
           for(i=0;i<n;i++)
           {
            if(i==0)
                l=s=a[i];
             if(a[i]>l)
            {
                l=a[i];
                pl=i;
            }

             if(a[i]<s)
            {
                s=a[i];
                sl=i;
            }
          }

          if(sl<pl)
          cout<<s<<" "<<l<<endl;
          else if(pl<sl)
            cout<<l<<" "<<s<<endl;
       }
    }
    return 0;
}
