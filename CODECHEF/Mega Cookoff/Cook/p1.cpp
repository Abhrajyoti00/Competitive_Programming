#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--){
	    int n,s;
	    cin>>n>>s;
	    int p[n],df[n];
	    for(int i=0;i<n;i++)    cin>>p[i];
	    for(int i=0;i<n;i++)    cin>>df[i];

        int s0=0,s1=0,f=0,f1=0;
	    for(int i=0;i<n;i++) {
	        if(df[i]==0){
                if(f==0)
                {
                    s0=p[i];
                    f=1;
                }
                else if(p[i]<s0)
                    s0=p[i];
	            
	        }
	        else if(df[i]==1){
	           if(f1==0)
                {
                    s1=p[i];
                    f1=1;
                }
                else if(p[i]<s1)
                    s1=p[i];
	            
	        }
        }
	       
            if(f==0  || f1==0)
             cout<<"no\n";
             else if(s0+s1+s <=100)
             cout<<"yes\n";
            
             else
             cout<<"no\n";
	}
	return 0;
}
