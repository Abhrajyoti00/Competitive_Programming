#include<iostream>
using namespace std;
int main()
{
	int i,n=4,j,s=0;
	for(i=1;i<n;i++)
	{
		for(j=1;j<n*2;j++)
		{
			if((i+j)==(n-1))
                cout<<"1";
            else if((i+j)==(n+1))
                cout<<(s=s+i)<<" ";
		}
		cout<<endl;
	}
	return 0;
}
