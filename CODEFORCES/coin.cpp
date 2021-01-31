#include<iostream>
using namespace std;
int main()
{
    int i,n,c=0;
    cin>>n;
    long long int a[n];
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            c=c+(n-i)%2;
        }

    }
    cout<<c;
}
