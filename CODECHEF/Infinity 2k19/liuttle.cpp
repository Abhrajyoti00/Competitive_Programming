#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,j,r,c,g,count=0,d;
        cin>>n>>k;
        int a[n][n],b[k];
        while(k--)
           {
               cin>>r>>c;
               for(i=1;i<=n;i++)
               {
                   for(j=1;j<=n;j++)
                   {
                       if(!((i==c)||(j==r)))
                        count++;
                   }
               }
           }

            if(count==0)
                cout<<"impossible"<<endl;
            else{
            g=gcd(count,(n*n));

            d=((n*n)/g)-(count/g);
            cout<<d<<" "<<((n*n)/g)<<endl; }
    }

    return 0;
}
