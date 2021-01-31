#include<iostream>
using namespace std;
int main()
{
    int i,n,p,c=0;
    cin>>n>>p;
    for(i=1;i<=n;i++)
    {
        if(n%i==p)
            c++;
    }
    cout<<c;
    return 0;
}
