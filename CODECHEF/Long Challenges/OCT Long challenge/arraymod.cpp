#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,c=0;
     scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d ",&n,&k);
        int x[n],a,b,s=0,c=0;
        int i;
        for(i=0;i<n;i++)
            scanf("%d",&x[i]);
        for(i=0;i<k;i++)
        {
            s=i%n;
            c=(n-s-1);
            a=x[s]; b=x[c];
            x[s]=(a^b);
        }
        for(i=0;i<n;i++)
            printf("%d ",x[i]);
    }
    return 0;
}
