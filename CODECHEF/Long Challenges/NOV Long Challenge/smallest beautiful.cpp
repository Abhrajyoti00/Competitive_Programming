#include<bits/stdc++.h>
using namespace std;
bool isPerfectSquare(long double x)
{
  // Find floating point value of
  // square root of x.
  long double sr = sqrt(x);

  // If square root is an integer
  return ((sr - floor(sr)) == 0);
}
bool dig(long double n)
{
    int k=n; int r,s=0;
            while(k!=0)
            {
                r=k%10;
                s+=(r*r);
                k/=10;
            }
            return(isPerfectSquare(s));
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,d=0,l=0;
        cin>>n;
        long lp=pow(10,(n-1));
        long up=pow(10,n);
        for(int i=lp; i<up; i++)
        {
            l++;
            int k=i; int r; int c=0;
            while(k!=0)
            {
                r=k%10;
                if(r==0)
                    c++;
                k/=10;
            }
            if(c==0)
            {
                if(dig(i)){
                    cout<<i<<endl;
                    break;
                }
                else
                    d++;
            }
        }
        if(d==l)
            cout<<-1<<endl;
    }
    return 0;
}
