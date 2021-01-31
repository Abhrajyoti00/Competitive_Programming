#include <iostream>
using namespace std;
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{

    int i,j,n,k,r;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            for(k=0;k<=n;k++)
            {
                 r=(fact(i)/(fact(i-k)*fact(k)));
                cout<<r<<" ";
            }



        }
        cout<<"\n";
    }
    return 0;
}
