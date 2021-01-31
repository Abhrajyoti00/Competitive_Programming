#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    long long int n,X,itr,small,i,k;
    cin>>n>>X;
    itr=((n-2)*180)/n;
    small=itr/(n-2);
    k=n-(X/n);
    i=((k-1)*small);
    cout<<i;
    return 0;

}
