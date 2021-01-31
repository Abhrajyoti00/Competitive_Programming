#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int t,r,k=0;
    cin>>t;
    while(t--)
    {
        long n,m,i,j,c=0,d;
        cin>>n>>m>>d;
        long A[m],s[m];
        long range = m + 1;
        s[0]=0;
        for(i=0;i<m;i++)
        {
            A[i]=rand();
            for(j=1;j<i;j++)
            {
                s[i]+=A[j];
            }
            if(s[i]%m==0)
                k++;
        }
        cout<<k<<endl;
    }
    return 0;
}
