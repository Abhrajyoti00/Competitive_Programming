#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
   while(t--)
   {
       ll n;
       cin>>n;
       int a[6]={0};
       for(int i=0;i<n;i++)
       {    string s;
           cin>>s;
           for(int j=0;s[j]!='\0';j++)
           {
                if(s[j]=='c')
                    a[0]++;
                else  if(s[j]=='o')
                    a[1]++;
                else  if(s[j]=='d')
                    a[2]++;
                else  if(s[j]=='e')
                    a[3]++;
                else if(s[j]=='h')
                    a[4]++;
                else  if(s[j]=='f')
                    a[5]++;


           }
       }
       a[0]/=2;
       a[3]/=2;
       sort(a,a+6);
       cout<<a[0]<<"\n";
   }
    return 0;

}
