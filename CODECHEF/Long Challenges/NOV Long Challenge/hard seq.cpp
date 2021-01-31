#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,l,k,c=0;
        cin>>n;
        int a[n];
        a[0]=a[1]=0; l=1; k=0;
        for(i=0;i<n;i++)
        {
            for(j=i-1;j>=0;j--)
            {
                if(a[i]==a[j])
                {
                    l=i;
                    k=j;
                    a[i+1]=(l-k);
                    break;
                }
                else
                {
                    a[i+1]=0;

                }
            }
        }
        for(i=0;i<n;i++)
        {
            if(a[i]==a[n-1])
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
