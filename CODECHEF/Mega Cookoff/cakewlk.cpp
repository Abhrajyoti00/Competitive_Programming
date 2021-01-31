#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N,i,c=0,d=0;
        cin>>N;
        while(N%10==0)
        {

          if(N%10==0)
          {
              N/=10;
              c++;
          }
        }
        while(N%2==0)
        if(N%2==0)
            {
                N/=2;
                d++;
            }

        if((N==1)&&(d<=c))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
