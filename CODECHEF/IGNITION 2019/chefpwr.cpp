#include<bits/stdc++.h>
using namespace std;
#define llt long long int

llt gcd(llt a, llt b){ 
    if (a == 0) 
        return b;  
    return gcd(b % a, a);  
 } 
  
   
// Function to return LCM of two numbers  
  llt lcm(llt a, llt b)  
 {  
    return (a*b)/gcd(a, b);  
 }  



int main()
{
    llt n,k;
    cin>>n>>k;
    vector<llt>a;
    llt d,p=1,c=0;
    for(llt i=0;i<n;i++)
    {
        cin>>d;
        a.push_back(d);
        p=lcm(p,a[i]);
    }
    //cout<<p<<endl;
    llt i=1;llt bigpower;
    long double div ;
     div= pow(p,-1);
    //cout<<div<<endl;
    long double power= (pow)(k,div);
        bigpower=(llt)(power);
    cout<<bigpower;
}