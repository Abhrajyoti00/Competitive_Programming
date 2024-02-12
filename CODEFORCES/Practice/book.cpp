#include<iostream>
using namespace std;
int main()
{
    long long int i,n,m,c=0,t,j,p,ld;
    cin>>t;
    while(t--)
    {
       c=0;
       ld=0;
       cin>>n;
       cin>>m;
        p=n-(n%m);
        long long int a[p];
        for(i=0;i<p;i=i+m)
        {
            a[i]=i+
            m;
            ld=(a[i]%10);
            c=c+ld;
        }
        cout<<c;
    }
}
