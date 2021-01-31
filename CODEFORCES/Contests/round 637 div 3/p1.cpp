#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c,d,lab,uab,lcd,ucd;
        cin>>n>>a>>b>>c>>d;
        lab=a-b;
        uab=a+b;
        lcd=c-d;
        ucd=c+d;
        int dif=uab-lab+1;
        int arr[dif];
        int co=0; 
        int f=0; int sum=0;
        
       if(lab*n > ucd || uab*n < lcd)
        {
            cout<<"No\n";
        }
        else
        cout<<"Yes\n";
        
    }
}