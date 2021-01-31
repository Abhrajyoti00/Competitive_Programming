#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],A,C,s=0;
        for(int i=0;i<n;i++)
        {
            cin>>A>>C;
            s+=C;
        }
        if(s>n)
        cout<<abs(s-n)<<endl;
        else if((n>s)&&(s!=0))
        {
            cout<<(n%s)<<endl;
        }
        else
        cout<<n<<endl;
    }
}