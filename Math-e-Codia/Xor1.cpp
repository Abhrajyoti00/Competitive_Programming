#include<iostream>
#include<math.h>
using namespace std;

inline int Xor(int x, int y)
{
	return ( (~x) & y ) | ( x & (~y) );
}

int main()
{
    unsigned long int i,n,p,suma=0,sumb=0;
    cin>>n;
   unsigned long int X[n],A[n],B[n];
    for(i=0;i<n;i++)
    {
        X[i]=i+1;
    }
    A[0]=X[0]=1;
    suma=1;
    for(i=1;i<n;i++)
    {
        A[i]=Xor(A[i-1],X[i]);
        suma+=A[i];
    }
    for(i=0;i<n;i++)
    {

        B[i]=Xor(A[i],X[i]);
        sumb+=B[i];
    }
    cout<<(suma-sumb);
    return 0;
}
