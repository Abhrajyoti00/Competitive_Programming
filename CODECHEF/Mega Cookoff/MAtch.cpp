#include<iostream>
using namespace std;
int match(int n)
{
    if((n==2)||(n==3)||(n==5))
        return 5;
    else if((n==0)||(n==6)||(n==9))
        return 6;
    else if(n==1)
        return 2;
    else if(n==4)
        return 4;
     else if(n==7)
        return 3;
     else if(n==8)
        return 7;
}

int main()
{
    int t,r;
    cin>>t;
    while(t--)
    {
        long a,b,s=0,k,sd=0;
        cin>>a>>b;
        k=s=a+b;
        while(k!=0)
        {
            r=k%10;
            sd=sd+match(r);
            k/=10;
        }
    cout<<sd<<endl;
    }
    return 0;
}
