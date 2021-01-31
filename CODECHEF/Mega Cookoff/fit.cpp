#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,r;
    cin>>t;
    while(t--)
    {
        long N,sum=0,k,sd=0,i;
        cin>>N;
        string s[N-1];
        long A[N];
        for(i=0;i<N;i++)
        {
            cin>>A[i];
        }
        for(i=0;i<N-1;i++)
        {
            getline(cin, s[i]);
        }
        for(i=0;i<(N-1);i++)
        {
            if((s[i]==">")&&(!(A[i]>A[i+1])))
               {
                   cout<<"NO"<endl;
               }
        }
    }
    return 0;
}
