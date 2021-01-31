#include<bits/stdc++.h>
using namespace std;
#define llt long long int
int main()
{
    llt n,e,Q,t,p,q;
    cin>>n>>e>>Q;
    llt arr[n];
    llt x[e],y[e];
    for(llt i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(llt i=0;i<e;i++)
    {
        cin>>x[i]>>y[i];
    }
    for(llt i=0;i<Q;i++)
    {
        cin>>t>>p>>q;
        if(t==1)
        {
            arr[p]=arr[q];
        }
        else if(t==2)
        {
            
        }
    }
}