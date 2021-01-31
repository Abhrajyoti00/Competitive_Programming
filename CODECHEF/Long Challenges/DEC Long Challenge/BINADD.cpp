#include<bits/stdc++.h>
using namespace std;
int add(string A, string B)
{
     while (B>0)
     {
         int U = A^B;
        int V= A & B;
        A=U;
        B = V * 2;
     }
        return A;
}
   int main()
   {
       int t;
       cin>>t;
        while(t--)
        {
            string a,b;
            cin>>a>>b;
            cout<<add(a,b)<<endl;
        }
    return 0;
   }