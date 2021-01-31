#include<bits/stdc++.h>
using namespace std;
#define llt long long int

int main()
{
    llt t,m=1000000007;
    cin>>t;
    while(t--)
    {
        llt l,r,s=0,sum=0;
        cin>>l>>r;
        for(llt i=l;i<=r;i++)
        {
            for(llt j=l;j<r;j++)
            {
                if((j&(j+1))!=0)
                s=s+(j&(j+1));
                else
                {
                    s=0;
                    break;
                }
                
            }
            sum+=s;
        }
        cout<<sum<<endl;
    }
    
}