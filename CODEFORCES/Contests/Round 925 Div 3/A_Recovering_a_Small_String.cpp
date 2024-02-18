#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>v;
        int n;
        cin>>n;
        string ans = "";
        int flag = 0;
        if(flag == 0)
            for(int i = 1; i<= 26; i++){
                if(flag == 0)
                for(int j = 1; j<=26; j++){
                    if(flag == 0)
                    for(int k = 1; k<=26; k++){
                        if(i+j+k == n){
                            ans += (char)'a' + i - 1;
                            ans += (char)'a' + j - 1;
                            ans += (char)'a' + k - 1;
                            cout<<ans<<"\n";
                            flag = 1;
                            break;
                        }
                    }
                }
            }
        }
    }
