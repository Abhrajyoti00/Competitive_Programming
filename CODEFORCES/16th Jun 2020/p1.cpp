#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char b[102],a[102];
		cin.getline(b,102); 
        int n;
        n=strlen(b)-1;
		int c=0;
		a[0]=b[0];
		int d=1;
		for(int i=1;i<n;i++)
		{
			if(b[i]==b[i+1])
			{
				c++;
			}
            
			else
			{
				c=(int)ceil(c/2);
				for(int j=1;j<=c;j++)
				{
					a[d++]=b[i];
				}
				c=0;
			}
		}
		a[d]=b[n];
        int dos=strlen(a)-1;
        for(int i=0;i<d;i++)
		cout<<a[i];
        cout<<endl;
	}
}
	