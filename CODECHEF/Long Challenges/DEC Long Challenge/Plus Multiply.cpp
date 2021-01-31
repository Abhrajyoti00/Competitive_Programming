#include<bits/stdc++.h>
using namespace std; 

int calc(int n)
{
    if((n==1)||(n==0))
    return 0;
    else
    return ((n-1)+calc(n-1));
}

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int i,n,c0=0,c2=0,j,c;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
            c0++;
            if(a[i]==2)
            c2++;
        }
            c=calc(c0)+calc(c2);      
        cout<<c<<endl;
    }
    
    return 0;
}
