#include<bits/stdc++.h>
#define ll long long
using namespace std;
     int main() {
       ll t;
       cin>>t;
       while(t--){
           ll n;
           cin>>n;
           ll a[n],p[n+2],val[n+2];
            for(ll i=0;i<n;i++)
                cin>>a[i];
            ll c=1,d=1,value=0;
            value= n*(n+1);
            value/=2;
           
            for(ll i=0;i<n;i++)
            {
                if(abs(a[i])%4==2)
                {
                    p[c++]=i;
                    val[d++]=1;
                }
                if(abs(a[i])%4==0)
                {
                    p[c++]=i;
                    val[d++]=0;
                }
                
            }
                //cout<<c<<" "<<d<<" ";
                p[0]=-1; p[c]=n;
                val[0]=0;  val[d]=0;
            for(ll i=1;i<c;i++){
                if(val[i]!=0){
                    value-=((p[i]-p[i-1])*(p[i+1]-p[i]));
                }
            }
            cout<<value<<"\n";
       }
    }
