#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    long long int t,n,d;
    cin>>t;
    while(t--)
    {
        cin>>n;
        d=(log(n)/log(2));
        if(d%4==1)
            cout<<9<<endl;
        else if(d==1)
            cout<<1<<endl;
        else
            cout<<(d%4)<<endl;
    }
    return 0;
}
