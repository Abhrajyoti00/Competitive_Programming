/* Hint taken from GeeksforGeeks
Link:https://www.geeksforgeeks.org/check-if-x-can-give-change-to-every-person-in-the-queue/
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll chn(ll a[], ll n){
   ll c5=0,c10=0;
    for (int i = 0; i < n; i++) { 
        if(a[i]==5)
            c5++;
        if(a[i]==10)
            c10++;
        if (a[i] == 5) 
            continue;
        else if (a[i] == 10) { 
            c5--;
            if (c5 < 0) { 
                return 0; 
            }
        } 
        else if(a[i]==15) { 
              if (c10 > 0) { 
                c10--; 
            } 
            else { 
                c5 -= 2; 
                if(c5<0)
                return 0;
            } 
        } 
    }
} 

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
            cin>>a[i];
        if (chn(a, n)) 
        cout << "YES"<<endl; 
        else
        cout << "NO"<<endl; 
    }
    return 0;    
}

