#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int a,b;
		cin>>a>>b;
		for(int i=a;i<=b;i++) {
			if(i==1)
				continue;
			if(i==2) {
				cout<<i<<endl;
				continue;
			}
			int flag=1;
			for(int j=2;j<=sqrt(i);j++) {
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

