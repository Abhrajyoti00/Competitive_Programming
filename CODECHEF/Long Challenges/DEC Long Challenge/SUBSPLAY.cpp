#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int mn=n;
	    string s;
	    cin>>s;
	    unordered_map<char,int> mp;

	    for(int i=0;i<n;i++)
	    {
	        if(mp.find(s[i])==mp.end())
	        {
	            mp[s[i]]=i;
	        }
	        else
	        {
	            int cd=i-mp[s[i]];
	            if(cd<mn)
	            {
	                mn=cd;
	            }
	            mp[s[i]]=i;
	        }
	    }
	    cout<<n-mn<<endl;
	    
	    
	}
	return 0;
}
