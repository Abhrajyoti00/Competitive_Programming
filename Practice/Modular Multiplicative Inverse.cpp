#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,m,i;
	    cin>>a>>m;
	    for( i=0;i<=m-1;i++)
	    {
	        if(((a*i)%m)==1)
	        {
	            cout<<i<<endl;
	            break;
	        }
	    }
	    if(i==m)
        cout<<-1<<endl;
	}
	return 0;
}