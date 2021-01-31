#include<iostream>
using namespace std;
int fact(int n)
{
    long f=1,i;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    long s=0,n,i;
    for(i=1;i<=7;i++)
    {
        s=(s+(i/fact(i)));
    }
    cout<<s;
    return 0;
}



