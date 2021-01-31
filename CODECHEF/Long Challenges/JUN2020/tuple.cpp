#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll p,q,r,zero=0,one=0,two=0,three=0;
        cin>>p>>q>>r;
        ll a,b,c;
        cin>>a>>b>>c;
        if(p==a && q==b && r==c){
            cout<<0<<endl;
            zero = 1;
        }
        else if((p==a && q==b && r!=c)||(p==a && q!=b && r==c)||(p!=a && q==b && r==c))
        {
            cout<<1<<endl;
            one = 1;
        }
        else if(p==a && q!=b && r!=c)
        {
            if(((b-q)==(c-r))||((b/q)==(c/r)))
            {
                cout<<2<<endl;
                two=1;
            }
        }
        else if(p!=a && q!=b && r==c)
        {
            if(((b-q)==(a-p))||((b/q)==(a/p)))
            {
                cout<<2<<endl;
                two=1;
            }
        }
        else if(p!=a && q==b && r!=c)
        {
            if(((a-p)==(c-r))||((a/p)==(c/r)))
            {
                cout<<2<<endl;
                two=1;
            }
        }
        else if(p!=a && q!=b && r!=c)
        {
            if(((a-p)==(b-q))&&((b-q)==(c-r)))
            {
                    cout<<2<<endl;
                    two=1;
            }
            else if(((a/p)==(b/q)) && ((b/q)==(c/r)))
            {
                    cout<<2<<endl;
                    two=1;
            }
        }
        else if(((p==a && q!=b && r!=c)&&((b-q)!=(c-r))&&((b/q)!=(c/r)))||((p!=a && q==b && r!=c)&&((a-p)!=(c-r))&&((a/p)!=(c/r)))||((p!=a && q!=b && r=c)&&((b-q)!=(a-p))&&((b/q)!=(a/p))))
        {
            cout<<2<<endl;
            two=1;
        }
        
 
    }
}