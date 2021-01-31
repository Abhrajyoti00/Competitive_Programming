#include<bits/stdc++.h>
using namespace std;
#define NIL -1
#define MAX 1000000001
#define llt long long int

int main()
{
    llt x;
    cin>>x;
    llt r,d,a,b,c;
    r=x%500;
    
    d=x/500;
    a=d*1000;
    b=r/5;
    c=b*5;
    cout<<a+c<<endl;
    return 0;
}