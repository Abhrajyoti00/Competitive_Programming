#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,p=1,f=0;
        cin>>n;
        if(n==1)
        {
            cout<<1<<"\n";
            cout<<1<<" "<<1<<"\n";

        }
        else if(n==2)
        {
            cout<<1<<"\n";
            cout<<2<<" "<<1<<" "<<2<<"\n";
 
        }
        else if(n==3)
        {
            cout<<1<<"\n";
            cout<<3<<" "<<1<<" "<<2<<" "<<3<<"\n";

        }
    
        else if(n>3)
        {
             cout<<(n/2)<<"\n";
             cout<<3<<" "<<1<<" "<<2<<" "<<3<<"\n";
             for(long long i=4;i<n;i+=2)
             {
                cout<<2<<" ";
                cout<<i<<" "<<i+1;
                cout<<"\n";
            }
            if((n%2==0)&&(n>3)){
                cout<<1<<" "<<n<<"\n";
            }
        }
       /*else if((n%2==1)&&(n>3))
       {
           
             cout<<(n/2)<<"\n";
           for(long long i=n/2;i>=1;i--)
           {
                if(f==0)
                {
                    cout<<3<<" ";
                    cout<<p<<" ";
                    cout<<++p<<" ";
                    cout<<n<<" ";
                    cout<<"\n";
                    f=1;
                }
                else
                {
                    cout<<2<<" ";
                    cout<<++p<<" ";
                    cout<<++p<<" ";
                    cout<<"\n";
                }
                
            }
       } */
       
    }
    return 0;
}

