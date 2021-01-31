#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    long long int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int a=0,b=1,c=0,D[n],d,i,r;
        D[0]=a; D[1]=b;
        for(i=2;i<n;i++)
        {
            c=(a+b)%10;
            a=b;
            b=c;
            D[i]=c;
            cout<<D[i]<<" ";
        }
        c=0;
        r=n;
        d=0;
        cout<<endl;

           while(d!=1)
           {
            cout<<"\n";
            for(k=1;k<r;k++)
            {

                if(k%2==1)
                       {
                           D[c++]=D[k];
                         cout<<D[c-1]<<" ";
                       }
                if(k==(r-1))
                {
                    d=r=c;
                    c=0;
                }
            }
           }
        cout<<D[0];
    }
    return 0;
}

