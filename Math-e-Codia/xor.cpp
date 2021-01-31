#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    long long int i,n,p,suma=1,sumb=0;
    cin>>n;
   long long int X[n],A[n],B[n];
    for(i=0;i<n;i++)
    {
        X[i]=i+1;
    }
    A[0]=1;
    for(i=1;i<n;i++)
    {
        A[i]=(A[i-1]^X[i]);
        suma+=A[i];
    }
    for(i=0;i<n;i++)
    {

        B[i]=(A[i]^X[i]);
        sumb+=B[i];
    }
    cout<<(suma-sumb);
    return 0;
}
