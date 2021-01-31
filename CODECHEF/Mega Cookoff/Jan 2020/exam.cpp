#include<bits/stdc++.h>
using namespace std;
#define llt long long int
int main() {
	int t;
	cin>>t;
	while(t--) {
		llt a,b;
		cin>>a>>b;
		for(llt i=a;i<=b;i++) {
			if(i==1)
				continue;
			if(i==2) {
				cout<<i<<endl;
				continue;
			}
			llt flag=1;
			for(llt j=2;j<=sqrt(i);j++) {
				if(i%j==0) {
					flag=0;
					break;
				}
			}
			if(flag==0)
				continue;
			cout<<i<<endl;
		}
		cout<<endl;
	}
	return 0;
}