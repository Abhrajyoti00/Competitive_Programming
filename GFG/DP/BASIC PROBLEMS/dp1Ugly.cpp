#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ugly[n];
        ugly[0]=1; ll nm2=2,nm3=3,nm5=5;
        ll i2=1;
        ll i3=1;
        ll i5=1, m;
        for(ll i=1;i<n;i++)
        {
            m=min(nm2,nm3);
            ugly[i]=min(m,nm5);
            if(ugly[i]==nm2)
            {
             
                nm2=2*ugly[i2++];
            }
            if(ugly[i]==nm3)
            {
              
                nm3=3*ugly[i3++];
            }
             if(ugly[i]==nm5)
            {
        
                nm5=5*ugly[i5++];
            }
        }
        cout<<ugly[n-1]<<endl;
    }
    
}