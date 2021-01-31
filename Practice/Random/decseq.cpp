
#include<iostream>
#include<math.h>
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
   int i,j,a,b,n,c=0;
    cin>>a>>b>>n;
    int d[b];
    for(i=a;i<=b;i++)
    {
        if(i%2==1)
        {
           c++;
        }
    }
    j=(fact(c)/(fact(c-n)));
    cout<<(j%1000000007);
    return 0;
}



