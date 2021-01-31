#include<bits/stdc++.h>
using namespace std;
#define NIL -1
#define MAX 1000000001
#define llt long long int

unordered_map<long long int,long long int> dp;    

llt cost(llt n)
{
        if(n<=8)
        return n;
        if(dp[n]!=0)
        return dp[n];
        llt a,b,c;
        a=n/2; 
        b=n/3;
        c=n/4;
        return dp[n]=max(n,(cost(a)+cost(b)+cost(c)));
        //return dp[n]=max(n,(dp[a]+dp[b]+dp[c]));
        
}

int main()
{
   
        llt n;
        while(cin>>n)
        {
        	llt d=cost(n);
        	cout<<d<<endl;
        }
        

    return 0;
}