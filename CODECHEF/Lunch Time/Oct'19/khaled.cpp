#include<bits/stdc++.h>
using namespace std;

    int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,k,l,m;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        k=n/4;
        l=n/2;
        m=3*(n/4);
        if((a[k]==a[k-1])||(a[l]==a[l-1])||(a[m]==a[m-1])){ cout<<-1<<endl;}
        else
            cout<<a[k]<<" "<<a[l]<<" "<<a[m]<<endl;
    }
     return 0;
}
