#include<iostream>
#define llt long long int
using namespace std;
int main()
{
    llt i,j,t,n,g[150],f[150],k,s[150],l;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>g[j];
        }
        for(k=0;k<n;k++)
        {
            cin>>f[k];
        }

        for(j=0;j<n;j++)
        {
            s[j]=(g[j]*20)-(f[j]*10);
            if(s[j]<0)
                s[j]=0;
        }
        for(k=0;k<n;k++)
        {
            if(k==0)
                l=s[k];
            else if(l<s[k])
                l=s[k];
        }
        cout<<l<<endl;

    }
    return 0;

}
