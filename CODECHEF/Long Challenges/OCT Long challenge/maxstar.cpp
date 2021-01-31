#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
     scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n],s=0,c=0;
        int i,j;
        for(i=0;i<n;i++)
             scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {

            for(j=0;j<i;j++)
            {
                if(a[j]%a[i]==0)
                   {
                       c++;
                   }
            }
            if(s<c)
            s=c;
            c=0;
        }
       printf("%d\n",s);
    }
    return 0;
}
