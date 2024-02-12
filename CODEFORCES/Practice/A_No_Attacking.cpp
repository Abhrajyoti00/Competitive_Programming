#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        
        cin>>n>>a>>b;
        if(n<a || n<b)
            cout<<"No \n";
        else
        {    
            n = n-a;
            if(b<=2){
                if(n>=b){
                    cout<<"Yes \n";
                }
                else
                    cout<<"No \n";
            }
            else{
                if(n*2 >= (b))
                    cout<<"Yes \n";
                else
                    cout<<"No \n";   
            }
        }
    }

    return 0;
}