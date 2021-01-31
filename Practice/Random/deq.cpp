#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

int fact(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}
int main()
{
   int i,diff=0,a,b,k,c=0,x=1,n;
   cin>>a>>b>>k;
   diff = abs(b-a);
    n = (diff+1)/2;
    for(i=0;i<k;i++)
    x = x*(n-i);
    cout<<(x/fact(k));
    return 0;
}
