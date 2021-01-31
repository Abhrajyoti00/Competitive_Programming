#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;
        long long int A[n],B[n],g[n],a,b,i;
        /*for(i=0;i<n;i++)
        {

        } */
        for(i=0;i<n;i++)
        {
            cin>>g[i]>>A[i]>>B[i];
            if((i==0)&&(g[0]==2)&&(A[i]!=B[i]))
            {
                a=A[i];
                b=B[i];
                cout<<"NO"<<endl;
                continue;
            }
            if(g[i]==1)
            {
                a=A[i];
                b=B[i];
                cout<<"YES"<<endl;
            }
            else if(A[i]==B[i])
            {
                a=b=A[i];
                cout<<"YES"<<endl;
            }
            else if(a>b)
            {
                if((A[i]>B[i])&&(a>B[i]))
                {
                    a=A[i];
                    b=B[i];
                    cout<<"YES"<<endl;
                }
                if((A[i]<B[i])&&(a>A[i]))
                {
                    a=B[i];
                    b=A[i];
                    cout<<"YES"<<endl;
                }
                else
                cout<<"NO"<<endl;
            }
            else if(a<b)
            {
                if((A[i]>B[i])&&(b>B[i]))
                {
                    a=A[i];
                    b=B[i];
                    cout<<"YES"<<endl;
                }
                if((A[i]<B[i])&&(b>A[i]))
                {
                    a=B[i];
                    b=A[i];
                    cout<<"YES"<<endl;
                }
                else
                cout<<"NO"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
