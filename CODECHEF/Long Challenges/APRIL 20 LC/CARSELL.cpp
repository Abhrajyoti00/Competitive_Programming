#include <bits/stdc++.h>
#define llt long long int
using namespace std;
#define mod 1000000007
int main() {
	llt t;
	cin>>t;
	while(t--){
	    llt n;
	    cin>>n;
	    llt a[n],s=0;
	    
	    for(llt i=0; i<n;i++)
	    cin>>a[i];
	    
	    sort(a, a+n, greater<int>()); 
	    
	    for(llt i=0; i<n;i++){
	        if(a[i]-i<0){
	            a[i]=0;
	        }
	        else
	        a[i]-=i;
	        
	        s=((s%mod)+(a[i]%mod))%mod;
	    }
	    cout<<s<<endl;
	}
	return 0;
}
